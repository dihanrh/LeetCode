//https://leetcode.com/problems/single-number/description/
//Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> freq;
        int singleNum;
        for(int i  = 0; i < nums.size(); i ++)
        {
            freq[nums[i]]++;
        }
        for(auto i : freq)
        {
            if(i.second == 1)
            {
                singleNum = i.first; 
                break;
            }
        }

        return singleNum ;
    }
};

