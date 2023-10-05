//https://leetcode.com/problems/majority-element-ii/description/
//Majority Element II


// hash map
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> most_freq;
        unordered_map<int, int> freq_counter;
        int n = nums.size();

        for(int i = 0; i < n ; i++)
        {
            freq_counter[nums[i]] ++;
        }

        for(auto i : freq_counter)
        {
            if(i.second > floor(n/3))
            {
                most_freq.push_back(i.first);
            }
        }

        return most_freq ;
    }
};

// Boyer Moore voting algo
 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;
        int n = nums.size();

        // Phase 1: Find potential candidates
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Phase 2: Verify candidates
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            }
        }

        vector<int> result;
        if (count1 > n / 3) {
            result.push_back(candidate1);
        }
        if (count2 > n / 3) {
            result.push_back(candidate2);
        }

        return result;
    }
};

