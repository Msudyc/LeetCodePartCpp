/*
Given a binary tree, check whether it is a mirror of itself 
(ie, symmetric around its center).

For example, this binary tree is symmetric: 
    1
   / \
  2   2
 / \ / \
3  4 4  3

But the following is not:

    1
   / \
  2   2
   \   \
   3    3

Note:
Bonus points if you could solve it both recursively and iteratively. 

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        
    }
};
*/

#include "Ex101-SymmetricTree.h"

namespace LeetCodeTestSolutions
{
    bool Ex101::isSymmetric(TreeNode *root)
    {
        if (!root) return true;
        return check(root->left, root->right);
    }
    
    bool Ex101::check(TreeNode *leftNode, TreeNode *rightNode)
    {
        if (!leftNode && !rightNode) return true;
        if (!leftNode || !rightNode) return false;
        return leftNode->val == rightNode->val && 
            check(leftNode->left, rightNode->right) && 
            check(leftNode->right, rightNode->left);
    }
}