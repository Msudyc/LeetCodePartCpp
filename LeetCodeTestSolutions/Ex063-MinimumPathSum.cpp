/*
Given a m x n grid filled with non-negative numbers, find 
a path from top left to bottom right which minimizes the 
sum of all numbers along its path.

Note: You can only move either down or right at any point
in time.

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        
    }
};
*/

#include "Ex063-MinimumPathSum.h"

namespace LeetCodeTestSolutions
{
    int Ex63::minPathSum(vector<vector<int> > &grid)
    {
        if (grid.empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int> > temp(m, vector<int>(n, 0));      
        temp[0][0] = grid[0][0];
        for (int i = 1; i < n; i++) temp[0][i] = temp[0][i-1] + grid[0][i];
        for (int i = 1; i < m; i++) temp[i][0] = temp[i-1][0] + grid[i][0];  
        for(int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                temp[i][j] = min(temp[i][j-1], temp[i-1][j]) + grid[i][j];
        return temp[m-1][n-1];
    }

    int Ex63::minPathSum1(vector<vector<int> > &grid)
    {
        if (grid.empty() || grid[0].empty()) return 0;
        int m = grid.size(), n = grid[0].size();

        vector<int> dp(n + 1, INT_MAX);
        dp[1] = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                dp[j + 1] = min(dp[j + 1], dp[j]) + grid[i][j];

        return dp.back();
    }
}