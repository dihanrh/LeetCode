//https://leetcode.com/problems/majority-element/description/
//Majority Element


// hash map
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int maxCount = 0;
        int maxIdx = 0;
        int n = nums.size();
        map<int, int>counter ;

        for(int i = 0; i < n; i++)
        {
            counter[nums[i]]++;
        }
        for(auto i : counter)
        {
            if(i.second > maxCount)
            {
                maxCount = i.second;
                maxIdx = i.first;
            }
        }

        return maxIdx;
        
    }
};

//hash map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};

//sorting 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};


//moor voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int count = 0;
            int candidate = nums[0];
            int  n = nums.size();

            for(int i = 0; i < n; i++)
            {
                if(nums[i] == candidate)
                {
                    count ++;
                }
                else
                {
                    count --;
                }
                if(count == 0)
                {
                    candidate =  nums[i];
                    count ++ ;
                }
            }

            return candidate;
        
    }
};