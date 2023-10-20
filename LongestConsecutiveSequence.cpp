//https://leetcode.com/problems/longest-consecutive-sequence/
//Longest Consecutive Sequence
// TC : O(n)
// SC : O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        int longest = 1;
        unordered_set<int> st(nums.begin(),nums.end());

        for(auto it : st)
        {
            if(st.find(it - 1) == st.end())
            {
                int count = 1;
                int greater = it;
                while(st.find(greater+1) != st.end())
                {
                    greater++;
                    count ++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};