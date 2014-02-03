/*
Given a matrix of m x n elements (m rows, n columns), return 
all elements of the matrix in spiral order. 

For example,
 Given the following matrix: 
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]

You should return [1,2,3,6,9,8,7,4,5]. 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        
    }
};
*/

#include "Ex053-SpiralMatrix.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex53::spiralOrder(vector<vector<int> > &matrix)
    {
        vector<int> ret;
        if(matrix.empty() || matrix[0].empty())return ret;
        int left = -1, right = matrix[0].size()-1, top=0, bottom = matrix.size()-1;
        
        while(left <= right && top <= bottom)
        {
            // left to right
            for (int j = ++left; top <= bottom && j <= right; j++) 
                ret.push_back(matrix[top][j]);
            // up to down
            for (int i = ++top; left <= right && i <= bottom; i++)
                ret.push_back(matrix[i][right]);
            // right to left
            for (int j = --right; top <= bottom && j >= left; j--)
                ret.push_back(matrix[bottom][j]);
            // down to up
            for (int i = --bottom; left <= right && i >= top; i--)
                ret.push_back(matrix[i][left]);
        }
        
        return ret;
    }
}