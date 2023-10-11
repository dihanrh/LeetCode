//https://leetcode.com/problems/roman-to-integer/description/
//Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
        int  toNum = 0;
        unordered_map<char,int> roman = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}} ;

        for( int i = 0; i < s.size(); i ++)
        {
           (roman[s[i]] < roman[s[i+1]] ? toNum -= roman[s[i]] : toNum += roman[s[i]]);
        }

        return toNum;
    }
};