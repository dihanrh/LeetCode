//https://leetcode.com/problems/two-sum/
//Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // T : O(n^2)
        // S : O(1)
        
        vector<int> twoIdx;
        vector<int> :: iterator it;

        for (int i = 0; i < nums.size(); i++)
        {
            it = find(nums.begin(), nums.end(), target - nums[i]);

            if(it != nums.end() and i !=  it - nums.begin())
            {
                twoIdx.push_back(i);
                twoIdx.push_back(it - nums.begin());
                break;
            }
        }

        return twoIdx;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	
    	//S : O(n)
    	//T : O(n)
    	
        unordered_map<int, int> idx;

        for (int i = 0; i < nums.size(); i++)
        {
           if(idx.count(target - nums[i]))
           {
               return {i, idx[target-nums[i]]};
           }
           idx[nums[i]] = i;
        }

     return {};
    }
};