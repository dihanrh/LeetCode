//https://leetcode.com/problems/non-overlapping-intervals
//Non-overlapping Intervals

// TC : O(nlogn) where n is the size of event
// SC : O(n)

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> event;

        for(auto &i : intervals)
        {
            event.push_back({i[0],i[1]});
        }
        sort(event.begin(),event.end(),[](auto &p1, auto &p2){
            return p1.second < p2.second;
        });
        int last = INT_MIN;
        int overlap_count = 0;
        for(auto &i : event)
        {
            if(i.first >= last)
            {
                last = i.second;
            }
            else
            {
                overlap_count ++;
            }
        }
        return overlap_count;
    }
};