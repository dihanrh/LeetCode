//https://leetcode.com/problems/valid-anagram/description/
//Valid Anagram

// TC  : O(n) where n is size of string s and t	
// SC : O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count_s(256,0);
        vector<int> count_t(256,0);

        for(int i = 0; i<s.size(); i++)
        {
            count_s[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++)
        {
            count_t[t[i]]++;
        }

        return count_s == count_t;
    }
};