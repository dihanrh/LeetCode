//https://leetcode.com/problems/reverse-string/description/
//Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
// two pointer
class Solution {
public:
    void reverseString(vector<char>& s) {
      int left = 0;
      int right = s.size()-1;
      
    
    while(left < right)
    {
        //swap(s[left++],s[right--]);

        char tmp = s[left];
        s[left++] = s[right];
        s[right--] = tmp;
    }

    }
};