/*
Given a binary tree, determine if it is a valid binary 
search tree (BST). 

Assume a BST is defined as follows: 
.The left subtree of a node contains only nodes with keys 
 less than the node's key.
.The right subtree of a node contains only nodes with keys 
 greater than the node's key.
.Both the left and right subtrees must also be binary search
 trees.
 
class Solution {
public:
    bool isValidBST(TreeNode *root) {
        
    }
};
*/

#include "Ex098-ValidateBinarySearchTree.h"

namespace LeetCodeTestSolutions
{
    bool Ex98::isValidBST(TreeNode *root)
    {
        return dfs(root,NULL,NULL);
    }
    
    bool Ex98::dfs(TreeNode *root, TreeNode *pre, TreeNode *next)
    {
        if(root == NULL) return true; 
        if(pre != NULL && root->val <= pre->val)
            return false;
        if(next != NULL && root->val >= next->val)
            return false;
        return dfs(root->left, pre, root) && dfs(root->right, root, next);
    }
}