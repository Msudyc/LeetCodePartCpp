/*
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest
path from the root node down to the farthest leaf node.

class Solution {
public:
    int maxDepth(TreeNode *root) {
        
    }
};
*/

#include <queue>
#include "Ex104-MaximumDepthofBinaryTree.h"

namespace LeetCodeTestSolutions
{
    int Ex104::maxDepth(TreeNode *root)
    {
        if(root == NULL) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    int Ex104::maxDepth1(TreeNode *root)
    {
        if( root == NULL ) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int nCnt = q.size(), nDepth = 0;
        while(!q.empty())
        {
            nCnt--;
            if(nCnt == 0) nDepth++;
            TreeNode *p = q.front();
            q.pop();
            if( p->left) q.push(p->left);
            if( p->right ) q.push(p->right);
            if( nCnt == 0 ) nCnt = q.size();
        }
        
        return nDepth;
    }
}