//https://leetcode.com/problems/minimum-speed-to-arrive-on-time/
//Minimum Speed to Arrive on Time

// TC : O(nlog(INT_MAX))
// SC : O(1)

class Solution {
    bool isPossible(vector<int>& dist, double hour, int speed)
    {
        double time = 0.00;
        for(int i = 0; i < dist.size(); i ++)
        {
            if(i+1 == dist.size())
            {
                time += 1.00*dist[i]/speed;
            }
            else
            {
                time += (dist[i]+ speed - 1)/speed;
            }
        }
        return (time <= hour);
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int L = 1;
        int R = INT_MAX/2;
        int M;

        while(L < R)
        {
            M = ((R-L)/2)+L;
            if(!isPossible(dist,hour,M))
            {
                L = M+1;
            }
            else
            {
                R = M;
            }
        }
        return (L == INT_MAX/2 ? -1 : L);
    }
};