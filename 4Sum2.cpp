//https://leetcode.com/problems/4sum-ii/description/
//4Sum II

// TC : O(n*n) where is size of nums1 || nums2 || nums3 || nums4
// SC : O(|pair_sum|)

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> pair_sum;
        for(int i = 0; i< nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                pair_sum[nums1[i]+nums2[j]] ++;
            }
        }
        int count_zero = 0;
            for(int i = 0; i < nums3.size(); i++)
        {
            for(int j = 0; j < nums4.size();j++)
            {
                if(pair_sum.count(-(nums3[i]+nums4[j])))
                {
                    count_zero += pair_sum[-(nums3[i]+nums4[j])];
                }
            }
        }
        return count_zero;
    }
};