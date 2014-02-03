/*
Given a binary tree, return the zigzag level order traversal
of its nodes' values. (ie, from left to right, then right to 
left for the next level and alternate between).

For example:
 Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7



return its zigzag level order traversal as:

[
  [3],
  [20,9],
  [15,7]
]

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        
    }
};
*/

#include <stack>
#include "Ex103-BinaryTreeZigzagLevelOrderTraversal.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex103::zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int> > result;
        if (!root) return result;
         
        vector<int> levelVals;
        stack<TreeNode*> curLevel, nextLevel;
        bool leftToRight = true;
        curLevel.push(root);
         
        while (!curLevel.empty()) 
        {
            TreeNode *cur = curLevel.top();
            curLevel.pop();
            if (cur) 
            {
                levelVals.push_back(cur->val);
                if (leftToRight) 
                {
                    nextLevel.push(cur->left);
                    nextLevel.push(cur->right);
                } 
                else 
                {
                    nextLevel.push(cur->right);
                    nextLevel.push(cur->left);
                }
            }
            if (curLevel.empty()) 
            {
                if (!levelVals.empty()) 
                {
                    result.push_back(levelVals);
                    levelVals.clear();
                }
                
                leftToRight = !leftToRight;
                swap(curLevel, nextLevel);
            }
        }

        return result;
    }
}