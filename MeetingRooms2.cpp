//https://leetcode.com/problems/meeting-rooms-ii
//Meeting Rooms II


// TC : O(nlogn) where n is the size of intervals
// SC : O(n)

/*

Given an array of meeting time intervals intervals where intervals[i] = [starti, endi], return the minimum number of conference rooms required.

 

Example 1:

Input: intervals = [[0,30],[5,10],[15,20]]
Output: 2
Example 2:

Input: intervals = [[7,10],[2,4]]
Output: 1
 

Constraints:

1 <= intervals.length <= 10^4
0 <= starti < endi <= 10^6
*/

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        vector<pair<int,int>> event;
        for(auto & i : intervals)
        {
            event.push_back({i[0],1});
            event.push_back({i[1],-1});
        }
        sort(event.begin(),event.end());
        int min_room = 0;
        int room_count = 0;
        for(auto &i : event)
        {
            room_count += i.second ;
            min_room = max(min_room, room_count);
        }
        return min_room;
    }
};