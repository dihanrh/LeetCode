https://leetcode.com/problems/length-of-last-word/
//Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for(int i = s.size()-1; i >= 0; i --)
        {
            if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <='Z'))
            {
                count ++;
            }
            if(count and s[i] == ' ')
            {
                break;
            }
        }
        
        return count;
    }
};
