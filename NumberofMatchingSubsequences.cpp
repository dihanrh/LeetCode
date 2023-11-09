//https://leetcode.com/problems/number-of-matching-subsequences/description/
//Number of Matching Subsequences

//TC : O(|S|+|words|*(|word|*logS)) where word is element of words
//SC : O(|S|)

class Solution {
    vector<int> index_of[26];

    private:
    bool isSubsequence(string &s, string &word)
    {
        int last = -1;
        for(int i = 0; i < word.size(); i++)
        {
            int ord = word[i] - 'a';
            int next = upper_bound(index_of[ord].begin(),index_of[ord].end(), last) - index_of[ord].begin();
            if(next == index_of[ord].size())
            {
                return false;
            }
            last = index_of[ord][next];
        }
        return true;
       
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        for(int i = 0; i < s.size(); i++)
        {
            index_of[s[i]- 'a'].push_back(i);
        }

        int count = 0;
        for(auto &word: words)
        {
            count += isSubsequence(s, word);
        }
        return count;
    }
};