//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//Best Time to Buy and Sell Stock II

// TC : O(n)
// SC : O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int buy = INT_MAX;

        for(int i = 0; i < prices.size(); i++)
        {
            buy = min(prices[i], buy);
            if(prices[i] > buy)
            {
                profit += prices[i] - buy;
                buy = prices[i];
            }
        }

        return profit;
        
    }
};