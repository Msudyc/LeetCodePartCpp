/*
Given a binary tree, return the preorder traversal of its
nodes' values.

For example: Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3

return [1,2,3]. 

Note: 
Recursive solution is trivial, could you do it iteratively?

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        
    }
};
*/

#include <stack>
#include "Ex144-BinaryTreePreorderTraversal.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex144::preorderTraversal(TreeNode *root)
    {
        vector<int> res; 
        if (!root) return res;
        stack<TreeNode *> stk;
        stk.push(root);
        TreeNode *cur;
        while (!stk.empty()) 
        {
            cur = stk.top();
            stk.pop();
            res.push_back(cur->val);
            if (cur->right) stk.push(cur->right); 
            if (cur->left) stk.push(cur->left); 
        }
        
        return res;
    }
}