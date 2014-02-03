/*
Given an array where elements are sorted in ascending order, 
convert it to a height balanced BST.

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        
    }
};
*/

#include "Ex108-ConvertSortedArraytoBinarySearchTree.h"

namespace LeetCodeTestSolutions
{
    TreeNode *Ex108::sortedArrayToBST(vector<int> &num)
    {
        if (num.size() == 0) return NULL;
        if (num.size() == 1) 
        { 
            TreeNode *root = new TreeNode(num[0]);
            return root;
        }
        
        vector<int> left_tree(num.begin(), num.begin() + num.size()/2);
        vector<int> right_tree(num.begin() + num.size()/2 + 1, num.end());
        TreeNode *root = new TreeNode(num[num.size()/2]);
        root->left = sortedArrayToBST(left_tree);
        root->right = sortedArrayToBST(right_tree);
        return root;
    }
}