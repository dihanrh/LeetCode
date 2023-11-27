//https://leetcode.com/problems/minimum-area-rectangle/description/
//Minimum Area Rectangle

// TC :O(n*n) where n is size of points
// SC :O(m) where m is size of x_point

class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        unordered_map<int,unordered_set<int>> x_point;
        int min_area = INT_MAX;
        for(auto &it : points)
        {
            x_point[it[0]].insert(it[1]);
        }
        for(auto &p1 : points)
        {
            int x1 = p1[0];
            int y1 = p1[1];
            int i = 1;
            for(auto p2 = points.begin()+i; p2 != points.end();p2++)
            {
                int x2 = (*p2)[0];
                int y2 = (*p2)[1];
                if(x1 != x2 and y1 != y2 and x_point[x1].find(y2) != x_point[x1].end() and x_point[x2].find(y1) != x_point[x2].end())
                {
                    min_area = min(min_area, abs ((x1-x2)*(y1-y2)));
                }
            }
        }
        return (min_area == INT_MAX ? 0 : min_area);
    }
};