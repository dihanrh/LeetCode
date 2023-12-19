//https://leetcode.com/problems/find-peak-element
//Find Peak Element

// TC : O(logn) where n is size of 	nums
// SC : O(1)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int L = 0;
        int R = nums.size()-1;
        int M = 0;
        while(L < R)
        {
           M = L+(R-L)/2;
           if(nums[M] < nums[M+1])
           {
               L = M+1;
           }
           else
           {
              R = M;
           }
        }
        return L;
    }
};