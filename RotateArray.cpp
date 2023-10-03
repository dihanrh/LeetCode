//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        bool flag = true;
        int ns = nums.size();
        k = k % ns;

        vector<int> v;
       
       
       for(int i = ns - k; i < ns; i++)
       {
           v.push_back(nums[i]);
       }
       for(int i = 0; i < ns - k; i ++)
       {
           v.push_back(nums[i]);
         
       }

        nums =  v ;
    }
};