//https://leetcode.com/problems/longest-common-prefix/description/
//Longest Common Prefix

//TC :O(s length* strs length)
//Sc :O(s length)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        bool flag =  false;
        

        for(int i = 0; i < strs[0].size(); i++)
        {
            for(int j = 0; j < strs.size(); j ++)
            {
             if(strs[j][i] == strs[0][i])
             {
                 flag = 1;
             }
             else
             {
                 flag = 0;
                 break;
             }
            }
           if (flag)
           {
               s += strs[0][i];
           }
           else
           {
               break;
           }
        }
        return s;
    }
};