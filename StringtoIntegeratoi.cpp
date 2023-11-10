//https://leetcode.com/problems/string-to-integer-atoi/description/
//String to Integer (atoi)

// TC : O(|s|)
// SC : O(1)


class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;

       
        while (s[i] == ' ')
        {
        	i++;
        }

        
        if (s[i] == '-' || s[i] == '+')
        {
        	 sign = ((s[i++] == '-') ? -1 : 1);
        }

        
        while (i < s.length() && isdigit(s[i]))
        {
        	 result = result * 10 + (s[i++] - '0');
            if (result * sign >= INT_MAX)
            {
            	 return INT_MAX;
            }
            if (result * sign <= INT_MIN)
            {
            	return INT_MIN;
            }
        }
        
        result = result * sign
        
        return result;
    }
};