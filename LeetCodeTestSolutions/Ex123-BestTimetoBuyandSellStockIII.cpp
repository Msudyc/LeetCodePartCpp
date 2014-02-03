/*
Say you have an array for which the ith element is the 
price of a given stock on day i.

Design an algorithm to find the maximum profit. You may
complete at most two transactions.

Note:
 You may not engage in multiple transactions at the same
 time (ie, you must sell the stock before you buy again).

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        
    }
};
*/

#include "Ex123-BestTimetoBuyandSellStockIII.h"

namespace LeetCodeTestSolutions
{
    int Ex123::maxProfit(vector<int> &prices)
    {
        const int len = prices.size();
        if(len <= 1) return 0;
        int *maxFromHead = new int[len];
        maxFromHead[0] = 0;
        int minprice = prices[0], maxprofit = 0;
        for(int i = 1; i < len; i++)
        {
            minprice = min(prices[i-1], minprice);
            maxprofit = max(maxprofit, prices[i] - minprice);
            maxFromHead[i] = maxprofit;
        }
        
        int maxprice = prices[len - 1];
        int res = maxFromHead[len-1];
        maxprofit = 0;
        for(int i = len-2; i >=0; i--)
        {
            maxprice = max(maxprice, prices[i+1]);
            maxprofit = max(maxprofit, maxprice - prices[i]);
            if(res < maxFromHead[i] + maxprofit)
                res = maxFromHead[i] + maxprofit;
        }
        
        delete[] maxFromHead;
        return res;
    }
}