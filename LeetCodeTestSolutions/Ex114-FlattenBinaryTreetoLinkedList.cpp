/*
Given a binary tree, flatten it to a linked list in-place. 

For example, Given 

         1
        / \
       2   5
      / \   \
     3   4   6
     
The flattened tree should look like:
   1
    \
     2
      \
       3
        \
         4
          \
           5
            \
             6

Hints: 
If you notice carefully in the flattened tree, each node's 
right child points to the next node of a pre-order traversal.

class Solution {
public:
    void flatten(TreeNode *root) {
        
    }
};
*/

#include "Ex114-FlattenBinaryTreetoLinkedList.h"

namespace LeetCodeTestSolutions
{
    void Ex114::flatten(TreeNode *root)
    {
        if (!root) return;
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        if (left) 
        {
            root->right = left;
            root->left = NULL;
            TreeNode *rightmost = left;
            while(rightmost->right) rightmost = rightmost->right;
            
            rightmost->right = right; // point the right most to the original right child
        }
        
        flatten(root->right);
    }
}