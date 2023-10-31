//https://leetcode.com/problems/valid-parentheses/description/
//Valid Parentheses

// TC : linear,  O(n) where n is length of string
// SC : O(n)

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> closing = {{')','('},{'}','{'},{']','['}};
        stack<char> opening ;

        for(char i : s)
        {
            if(!opening.empty() and opening.top() == closing[i])
            {
                opening.pop();
                continue;
            }
            opening.push(i);
        }

        return(opening.empty() ? true : false);
    }
};