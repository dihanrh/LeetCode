//https://leetcode.com/problems/jump-game-ii
//Jump Game II

// TC : O (n) where n is size of array
// OC : O(1)

class Solution {
public:
    int jump(vector<int>& nums) {
        int far = 0;
        int count = 0;
        int current = 0;

        for(int i = 0; i < nums.size()-1; i++)
        {
            far = max(i+nums[i], far );
            if(i >= current)
            {
                current = far;
                count ++;
            }
        }
        return count;
    }
};	