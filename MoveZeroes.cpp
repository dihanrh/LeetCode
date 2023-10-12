//https://leetcode.com/problems/move-zeroes/description/
//Move Zeroes
// S : O(1)
//T : O(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

     int zeroIdx = 0;
     for(int i = 0; i < nums.size(); i++)
     {
         if(nums[i])
         {
             swap(nums[i],nums[zeroIdx++]);
         }
     }

    
    }
};