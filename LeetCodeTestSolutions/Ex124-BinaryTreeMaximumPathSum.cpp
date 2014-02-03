/*
Given a binary tree, find the maximum path sum. 

The path may start and end at any node in the tree. 

For example:
 Given the below binary tree, 

       1
      / \
     2   3

Return 6. 

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        
    }
};
*/

#include "Ex124-BinaryTreeMaximumPathSum.h"

namespace LeetCodeTestSolutions
{
    int Ex124::maxPathSum(TreeNode *root)
    {
        int csum;
        int maxsum = INT_MIN;
        maxPathSumHelper(root, csum, maxsum);
        return maxsum;
    }

    void Ex124::maxPathSumHelper(TreeNode *node, int &csum, int &maxsum) 
    {
        if(!node)  { csum = 0; return; }
        int lsum = 0, rsum = 0;
        maxPathSumHelper(node->left, lsum, maxsum);
        maxPathSumHelper(node->right, rsum, maxsum);
        csum = max(node->val, max(node->val + lsum, node->val + rsum));
        maxsum = max(maxsum, max(csum, node->val + lsum + rsum));
    }
}