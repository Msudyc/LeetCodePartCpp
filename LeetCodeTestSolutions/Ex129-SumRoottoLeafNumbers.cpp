/*
Given a binary tree containing digits from 0-9 only, each
root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents
the number 123.

Find the total sum of all root-to-leaf numbers.

For example, 
    1
   / \
  2   3

The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13. 

Return the sum = 12 + 13 = 25. 

class Solution {
public:
    int sumNumbers(TreeNode *root) {
        
    }
};
*/

#include "Ex129-SumRoottoLeafNumbers.h"

namespace LeetCodeTestSolutions
{
    int Ex129::sumNumbers(TreeNode *root)
    {
        return sumNumbers(root, 0);
    }

    int Ex129::sumNumbers(TreeNode *node, int prefix) 
    {
        if (!node) return 0;
        int ourSum = prefix * 10 + node->val;
        if (!node->left && !node->right) return ourSum;
        return sumNumbers(node->left, ourSum) + sumNumbers(node->right, ourSum);
    }
}