/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Follow up:
 Could you do this in-place?

class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        
    }
};
*/

#include "Ex047-RotateImage.h"

namespace LeetCodeTestSolutions
{
    void Ex47::rotate(vector<vector<int> > &matrix)
    {
        int n = matrix.size();
        for (int layer = 0; layer < n/2; layer++)
        {
            int first = layer;
            int last  = n-1-layer; 
            for (int i = first; i< last; i++)
            {
                int offset = i-first;
                int top = matrix[first][i];                            
                matrix[first][i] = matrix[last-offset][first]; //left->top                
                matrix[last-offset][first] = matrix[last][last-offset]; //bottom->top                
                matrix[last][last-offset] = matrix[i][last]; //right->bottom                
                matrix[i][last] = top; //top->right
            }
        }
    }
}