/*
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
 Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        
    }
};
*/

#include "Ex118-PascalsTriangle.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex118::generate(int numRows)
    {
        vector<vector<int> > result;
        if (numRows < 1) return result;
        result.push_back(vector<int>(1, 1));//first row (result[0])
        result.resize(numRows);
        for(int i = 1; i < numRows; i++)
        {
            result[i].resize(i+1);
            result[i][0] = 1;
            result[i][i] = 1;
            for(int j = 1; j < i; j++)
            {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }

        return result;
    }
}