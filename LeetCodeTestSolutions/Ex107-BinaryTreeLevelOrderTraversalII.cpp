/*
Given a binary tree, return the bottom-up level order 
traversal of its nodes' values. (ie, from left to right, 
level by level from leaf to root).

For example:
 Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7

return its bottom-up level order traversal as:

[
  [15,7]
  [9,20],
  [3],
]

class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        
    }
};
*/

#include "Ex107-BinaryTreeLevelOrderTraversalII.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex107::levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> result;
        traverse(root, 1, result);
        reverse(result.begin(), result.end());
        return result;
    }

    void Ex107::traverse(TreeNode *root, int level, vector<vector<int>> &result) 
    {
        if (!root) return;
        if (level > (int)result.size()) 
        {
            vector<int> temp;
            result.push_back(temp);
        }
        
        result[level-1].push_back(root->val);
        traverse(root->left, level + 1, result);
        traverse(root->right, level + 1, result);
    }
}