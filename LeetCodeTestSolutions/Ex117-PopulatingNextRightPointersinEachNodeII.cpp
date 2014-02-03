/*
Follow up for problem "Populating Next Right Pointers in 
Each Node".

What if the given tree could be any binary tree? 
Would your previous solution still work?

Note: 
.You may only use constant extra space.

For example, Given the following binary tree,

         1
       /  \
      2    3
     / \    \
    4   5    7

After calling your function, the tree should look like:

         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \    \
    4-> 5 -> 7 -> NULL

class Solution {
public:
    void connect(TreeLinkNode *root) {
        
    }
};
*/

#include "Ex117-PopulatingNextRightPointersinEachNodeII.h"

namespace LeetCodeTestSolutions
{
    void Ex117::connect(TreeLinkNode *root)
    {
        while(root) 
        {
            TreeLinkNode * next = NULL; // the first node of next level
            TreeLinkNode * prev = NULL; // previous node on the same level
            for (; root; root = root->next) 
            {
                if(!next) next = root->left ? root->left : root->right;
                if (root->left) 
                {
                    if (prev) prev->next = root->left;
                    prev = root->left;
                }
                if (root->right) 
                {
                    if (prev) prev->next = root->right;
                    prev = root->right;
                }
            }
            
            root = next; // turn to next level
        }
    }
}