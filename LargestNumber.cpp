//https://leetcode.com/problems/largest-number/description/
//Largest Number

// TC : O(nlogn) n is  the size of nums
// SC : O(n)

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> str_vec;
        for(int i = 0; i < nums.size(); i++)
        {
            str_vec.push_back(to_string(nums[i]));
        }

        sort(str_vec.begin(), str_vec.end(),[](string &i ,string &j)
        {
            return i+j > j+i;
        });
        string largest;
        int count_zero = 0;
        for(int i = 0; i <str_vec.size(); i++)
        {
            largest += str_vec[i];
            count_zero += (str_vec[i] == "0" ? 1 : 0);
        }
        return (count_zero == str_vec.size() ? "0" : largest);
    }
};