/*
Given a binary tree, return the inorder traversal of 
its nodes' values.

For example:
 Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3

return [1,3,2]. 

Note: Recursive solution is trivial, could you do it 
iteratively?

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        
    }
};
*/
#include <stack>
#include "Ex094-BinaryTreeInorderTraversal.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex94::inorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode*> stk;
        TreeNode *current = root;
        while (!stk.empty() || current) 
        {
            if (current) 
            {
                stk.push(current);
                current = current->left;
            } 
            else 
            {
                current = stk.top();
                stk.pop();
                res.push_back(current->val);
                current = current->right;
            }
        }

        return res;
    }
}