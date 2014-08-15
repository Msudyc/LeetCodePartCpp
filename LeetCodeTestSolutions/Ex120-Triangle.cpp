/*
Given a triangle, find the minimum path sum from top to
bottom. Each step you may move to adjacent numbers on the
row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
*/

#include "Ex120-Triangle.h"

namespace LeetCodeTestSolutions
{
    int Ex120::minimumTotal(vector<vector<int> > &triangle)
    {
        int n = triangle.size();
        vector<int> p(n+1, 0);
        while(n-- > 0)
            for(int i = 0; i <= n; i++)
                p[i] = triangle[n][i] + ((p[i] < p[i+1]) ? p[i] : p[i+1]);
        return p[0];
    }
}