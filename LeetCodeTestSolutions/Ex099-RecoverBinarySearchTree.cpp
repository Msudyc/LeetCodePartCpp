/*
Two elements of a binary search tree (BST) are swapped 
by mistake.

Recover the tree without changing its structure. 
Note:
 A solution using O(n) space is pretty straight forward. 
 Could you devise a constant space solution?

class Solution {
public:
    void recoverTree(TreeNode *root) {
        
    }
};
*/

#include "Ex099-RecoverBinarySearchTree.h"

namespace LeetCodeTestSolutions
{
    void Ex99::recoverTree(TreeNode *root)
    {
        TreeNode* nodes[2] = {NULL, NULL};
        findNodes(root, NULL, nodes);
        int temp = nodes[0]->val;
        nodes[0]->val = nodes[1]->val;
        nodes[1]->val = temp;
    }

    TreeNode *Ex99::findNodes(TreeNode *root, TreeNode *prev, TreeNode *nodes[2]) 
    {
        if (!root) return prev;
        TreeNode *previous = findNodes(root->left, prev, nodes);
        if (previous && previous->val > root->val) 
        {
            if (!nodes[0] && !nodes[1]) { nodes[0] = previous; nodes[1] = root; } 
            else nodes[1] = root;
        }
        
        return findNodes(root->right, root, nodes);
    }
}