//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int flag = 1;

        for(int i = 1; i < nums.size(); i ++)
        {
           if(nums[i] !=  nums[i-1])
           {
               nums[flag++] = nums[i];
           }
        }
        return flag ;
    }
};