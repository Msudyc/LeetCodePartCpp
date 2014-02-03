/*
Given inorder and postorder traversal of a tree, construct
the binary tree.

Note:
 You may assume that duplicates do not exist in the tree. 

class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        
    }
};
*/

#include "Ex106-ConstructBinaryTreefromInorderandPostorderTraversal.h"

namespace LeetCodeTestSolutions
{
    TreeNode *Ex106::buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        return build(inorder.begin(), inorder.end(), postorder.begin(), postorder.end());
    }
    
    TreeNode *Ex106::build(iter in_beg, iter in_end, iter post_beg, iter post_end) 
    {
        if(in_beg == in_end) return NULL; 
        int root_val = *(post_end-1);
        iter rt_it = find(in_beg, in_end, root_val);
        iter left_end = post_beg + (rt_it - in_beg);
        TreeNode *child_root = new TreeNode(root_val);
        child_root->left = build(in_beg, rt_it, post_beg, left_end);
        child_root->right = build(rt_it + 1, in_end, left_end, post_end - 1);
        return child_root;
    }
}