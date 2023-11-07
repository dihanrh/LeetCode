//https://leetcode.com/problems/find-and-replace-in-string/description/
//Find And Replace in String

// TC : O(mlogn) where m is the size of string and n is the size of map mp
// SC : O(n) n is the size of mp 

class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        
         map <int, pair<string,string>> mp;
         for(int i = 0; i < indices.size(); i++)
         {
             if(s.substr(indices[i], sources[i].size()) == sources[i])
             {
                 mp[indices[i]] = make_pair(sources[i], targets[i]);
             }
         }

         int i = 0;
         string new_s;
         
         while(i < s.size())
         {
             if(mp.find(i) != mp.end())
             {
                 new_s += mp[i].second;
                 i += mp[i].first.size();
             }
             else
                {
                    new_s += s[i];
                    i ++;
                }
         }
         return new_s;
    }
};