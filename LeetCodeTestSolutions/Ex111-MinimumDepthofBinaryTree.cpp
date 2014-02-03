/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest
path from the root node down to the nearest leaf node.

class Solution {
public:
    int minDepth(TreeNode *root) {
        
    }
};
*/

#include "Ex111-MinimumDepthofBinaryTree.h"

namespace LeetCodeTestSolutions
{
    int Ex111::minDepth(TreeNode *root)
    {
        return minDepthR(root, false);
    }

    int Ex111::minDepthR(const TreeNode * r, bool hasbrother)
    {    
        if (!r) return hasbrother?INT_MAX:0;

        int minl = minDepthR(r->left, r->right != NULL);
        int minr = minDepthR(r->right, r->left != NULL);
        return min(minl, minr) + 1;
    }
}