//https://leetcode.com/problems/group-anagrams/description/
//Group Anagrams

// TC : O(n*m*log*m) n is the size of strs, m is size of  element of strs
// SC : O(p+q) p is size of sorted_to_groups and q is  groups_anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> sorted_to_groups;
        for(int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(),key.end());
            sorted_to_groups[key].push_back(strs[i]);
        }
        
        vector<vector<string>> groups_anagrams;
      for(auto &it : sorted_to_groups)
        {
            groups_anagrams.push_back(it.second);
        }
        return groups_anagrams;
    }
};