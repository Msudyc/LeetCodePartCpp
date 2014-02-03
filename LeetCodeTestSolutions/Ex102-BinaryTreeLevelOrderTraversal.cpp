/*
Given a binary tree, return the level order traversal of 
its nodes' values. (ie, from left to right, level by level).

For example:
 Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        
    }
};
*/

#include <queue>
#include "Ex102-BinaryTreeLevelOrderTraversal.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex102::levelOrder(TreeNode *root)
    {
        vector< vector<int> > result;
        if (root == NULL) return result; 
        queue<TreeNode*> q;
        q.push(root);
        int count = 1, num = 0; 
        vector<int> tmp(0);
        while(!q.empty())
        {
            tmp.clear();
            num = 0;
            for (int i = 0; i < count; i++) 
            {
                root = q.front();
                q.pop();
                tmp.push_back(root->val); 
                if (root->left != NULL)
                {
                    q.push(root->left); 
                    num++;
                }
                if (root->right != NULL) 
                {
                    q.push(root->right); 
                    num++;
                }
            }
            
            count = num; 
            result.push_back(tmp);
        }
        
        return result;
    }
}