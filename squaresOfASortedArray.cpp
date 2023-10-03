//https://leetcode.com/problems/squares-of-a-sorted-array/description/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n  = nums.size();

        for(int i = 0; i < n; i++)
        {
            nums[i] = nums[i]*nums[i];
        }
        
        sort(nums.begin(),nums.end());

        return nums;
    }
};

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n  = nums.size();
        vector<int> result(n);

        int l = 0;
        int r = n-1;

        for(int i = n - 1; i >= 0 ; i --)
        {
            if(abs(nums[l]) > abs(nums[r]))
            {
                result[i] = nums[l] * nums[l++];
            }
            else
            {
                result[i] = nums[r] * nums[r--];
            }
        }

        return result;
    }
};

