/*
Given a 2D binary matrix filled with 0's and 1's, find the 
largest rectangle containing all ones and return its area.

class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        
    }
};
*/

#include "Ex085-MaximalRectangle.h"

namespace LeetCodeTestSolutions
{
    int Ex85::maximalRectangle(vector<vector<char> > &matrix)
    {
        if (matrix.empty()) return 0;
        int ret = 0, n = matrix[0].size(), m = matrix.size();
        vector<int> H(n), L(n), R(n, n);
        for (int i = 0; i < m; i++) 
        {
            int left = 0, right = n;
            // calculate L(i, j) from left to right
            for (int j = 0; j < n; j++) 
            {
                if (matrix[i][j] == '1') { H[j]++; L[j] = max(L[j], left); }
                else { left = j+1; H[j] = 0; L[j] = 0; R[j] = n; }
            }
            // calculate R(i, j) from right to left
            for (int j = n-1; j >= 0; --j) 
            {
                if (matrix[i][j] == '1') 
                { 
                    R[j] = min(R[j], right); 
                    ret = max(ret, H[j]*(R[j]-L[j]));
                }
                else  right = j;
            }
        }

        return ret;
    }
}