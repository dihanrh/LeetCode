//https://leetcode.com/problems/3sum/
//3Sum

// TC : O(n^2)
// SC : O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;

        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            int L = i + 1 ;
            int R = nums.size()- 1;
            int target = -a;

            while(L < R)
            {
                if(nums[L] + nums[R] > target)
                {
                    R--;
                }
                else if(nums[L] + nums[R] < target)
                {
                    L++;
                }
                else
                {
                    int b = nums[L];
                    int c = nums[R];
                    while(L < R and nums[L+1] == b)
                    {
                        L++;
                    }
                    while(L < R-1 and nums[R-1] == c)
                    {
                        R--;
                    }
                   L++;
                   R--;
                    triplets.push_back({a,b,c});
                }
            }

            while(i+1 != nums.size() and nums[i] == nums[i+1] )
            {
                i++ ;
            }
           
           
        }

        return triplets;
    }
};