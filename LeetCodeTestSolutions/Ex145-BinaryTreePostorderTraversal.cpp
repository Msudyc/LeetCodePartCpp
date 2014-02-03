/*
Given a binary tree, return the postorder traversal of its
nodes' values.

For example: Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3

return [3,2,1]. 

Note: Recursive solution is trivial, could you do it iteratively?

class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        
    }
};
*/

#include <stack>
#include "Ex145-BinaryTreePostorderTraversal.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex145::postorderTraversal(TreeNode *root)
    {
        vector<int> res;
        if (!root) return res;
        stack<TreeNode*> stk;
        stk.push(root);
        TreeNode *prev = NULL;
        while (!stk.empty()) 
        {
            TreeNode *curr = stk.top();
            if (!prev || prev->left == curr || prev->right == curr) 
            {
                if (curr->left) stk.push(curr->left);
                else if (curr->right) stk.push(curr->right);
            } 
            else if (curr->left == prev) 
            {
                if (curr->right) stk.push(curr->right);
            } 
            else 
            {
                res.push_back(curr->val);
                stk.pop();
            }
            
            prev = curr;
        }

        return res;
    }
}