//https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/description/
//Number of Subarrays with Bounded Maximum
class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {

        int subArray = 0;
        int l = -1;
        int r = -1;

        for(int i = 0; i < nums.size(); i++)
        {
           if(nums[i] > right)
           {
             l = i;
           }
           if(nums[i] >= left)
           {
               r = i;
           }

           subArray += r - l;
            
          
        }
        return subArray ;
    }
};