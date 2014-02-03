/*
Given a binary tree, determine if it is height-balanced. 

For this problem, a height-balanced binary tree is defined
as a binary tree in which the depth of the two subtrees of
every node never differ by more than 1. 

class Solution {
public:
    bool isBalanced(TreeNode *root) {
        
    }
};
*/

#include "Ex110-BalancedBinaryTree.h"

namespace LeetCodeTestSolutions
{
    bool Ex110::isBalanced(TreeNode *root)
    {
        if (root == NULL) return true;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        if (abs(left - right) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
    
    int Ex110::getHeight(TreeNode *p) 
    {
        if (p == NULL) return 0;
        return max(getHeight(p->left), getHeight(p->right)) + 1;
    }
}