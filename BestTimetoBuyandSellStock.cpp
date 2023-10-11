//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	
    	//S : O(1)
    	//T : O(n)
    	
       int buy = INT_MAX;
       int profit = 0;

       for(int i = 0; i < prices.size(); i++)
       {
           buy = min(buy,prices[i]);
           profit = max(profit, prices[i] - buy);
       }

       return profit;

    }
};

