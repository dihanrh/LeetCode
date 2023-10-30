//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
//Find the Index of the First Occurrence in a String

// TC : O(m*n)
// SC : (1)

class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = needle.size();
       int m = haystack.size();

       if(n > m) return -1;

       for(int i = 0; i <= m-n; i++)
       {
           int j  = 0;
           while(j < n and haystack[i+j] == needle[j])
           {
             j++;
           }
           if( j == n) return i;
       }
       return -1;


    }
};