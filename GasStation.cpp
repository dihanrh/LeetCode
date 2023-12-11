//https://leetcode.com/problems/gas-station/
//Gas Station

// TC : O(n) where n is the size of gas.
// SC : O(1)

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0;
        int current_gas = 0;
        int station = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            total_gas += gas[i] - cost[i];
            current_gas += gas[i] - cost[i];

            if(current_gas < 0)
            {
                current_gas = 0;
                station = i+1;
            }
        }
        return (total_gas < 0 ? -1 : station);
    }
};