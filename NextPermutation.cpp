//https://leetcode.com/problems/next-permutation/
//Next Permutation

// TC : O(n)
// SC : O(1)


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int minIdx = -1;
        int n = nums.size();

      
        for(int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                minIdx = i;
                break; 
            }
        }

        if (minIdx != -1) {
            
            int lastIdx = -1;
            for (int i = n - 1; i > minIdx; i--) {
                if (nums[i] > nums[minIdx]) {
                    lastIdx = i;
                    break; 
                }
            }

            swap(nums[minIdx], nums[lastIdx]);
            reverse(nums.begin() + minIdx + 1, nums.end());
        } else {
            
            reverse(nums.begin(), nums.end());
        }
    }
};
