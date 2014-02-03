/*
Say you have an array for which the ith element is the 
price of a given stock on day i.

If you were only permitted to complete at most one 
transaction (ie, buy one and sell one share of the 
stock), design an algorithm to find the maximum profit.

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        
    }
};
*/

#include "Ex121-BestTimetoBuyandSellStock.h"

namespace LeetCodeTestSolutions
{
    int Ex121::maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0) return 0;
        int low = prices[0];
        int profit = 0;
        for (int i = 1; i < (int)prices.size(); i++)
        {
            low = min(prices[i], low);
            profit = max(profit, prices[i] - low);
        }
        
        return profit;
    }
}