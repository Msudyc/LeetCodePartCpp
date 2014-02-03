/*
Given a binary tree and a sum, find all root-to-leaf paths 
where each path's sum equals the given sum. 

For example:
 Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1


return

[
   [5,4,11,2],
   [5,8,4,5]
]

class Solution {
public:
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        
    }
};
*/

#include "Ex113-PathSumII.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex113::pathSum(TreeNode *root, int sum)
    {
        vector<vector<int> > paths;
        vector<int> curPath;
        pathSumRecursive(root, sum, paths, curPath);
        return paths;
    }

    void Ex113::pathSumRecursive(TreeNode *root, int sum, vector<vector<int> > &paths, vector<int> &curPath) 
    {
        if (root == NULL) return;
        curPath.push_back(root->val);
        sum -= root->val;
        if (!root->left && !root->right && sum == 0)
            paths.push_back(curPath);
        pathSumRecursive(root->left, sum, paths, curPath);
        pathSumRecursive(root->right, sum, paths, curPath);
        curPath.pop_back();
    }
}