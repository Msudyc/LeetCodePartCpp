/*
Given n, generate all structurally unique BST's 
(binary search trees) that store values 1...n.

For example,
 Given n = 3, your program should return all 5 unique 
 BST's shown below. 

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

Definition for binary tree
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    vector<TreeNode *> generateTrees(int n) {
        
    }
};
*/

#include "Ex096-UniqueBinarySearchTreesII.h"

namespace LeetCodeTestSolutions
{
    vector<TreeNode *> Ex96::generateTrees(int n)
    {
        return generateTrees(1, n);
    }

    vector<TreeNode *> Ex96::generateTrees(int start, int end) 
    {
        vector<TreeNode*> ret;
        if(start > end) { ret.push_back(NULL); return ret; }
        for(int i = start; i <= end; i++)
        {
            vector <TreeNode*> left = generateTrees(start, i-1);
            vector <TreeNode*> right = generateTrees(i+1, end);
            TreeNode *root;
            for(int j = 0; j < (int)left.size(); j++)
                for(int k = 0; k < (int)right.size(); k++)
                {
                    root = new TreeNode(i);
                    root->left=left[j];
                    root->right=right[k];
                    ret.push_back(root);
                }
        }
        
        return ret;
    }
}