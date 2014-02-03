/*
Given preorder and inorder traversal of a tree, construct
the binary tree.

Note:
 You may assume that duplicates do not exist in the tree. 

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        
    }
};
*/

#include "Ex105-ConstructBinaryTreefromPreorderandInorderTraversal.h"

namespace LeetCodeTestSolutions
{
    TreeNode *Ex105::buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int pre_len = preorder.size();
        int in_len = inorder.size();
        return helper(preorder, 0, pre_len - 1, inorder, 0, in_len - 1);
    }

    TreeNode *Ex105::helper(vector<int> &preorder, int ps, int pe, vector<int> &inorder, int is, int ie)
    {
        if(ps > pe) return NULL;
        TreeNode* root = new TreeNode(preorder[ps]);
        int val = preorder[ps];
        int i;
        for(i = is; i <= ie; i++)
            if(inorder[i] == val)
                break;
        int len = i - is;
        root->left = helper(preorder, ps+1, ps+len, inorder, is, i-1);
        root->right = helper(preorder, ps+len+1, pe, inorder, i+1, ie);
        return root;
    }
}