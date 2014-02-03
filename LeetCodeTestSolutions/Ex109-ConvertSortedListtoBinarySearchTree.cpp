/*
Given a singly linked list where elements are sorted in 
ascending order, convert it to a height balanced BST.

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        
    }
};
*/

#include "Ex109-ConvertSortedListtoBinarySearchTree.h"

namespace LeetCodeTestSolutions
{
    TreeNode *Ex109::sortedListToBST(ListNode *head)
    {
        if(!head) return NULL;
        int n = 0;
        ListNode * t = head;
        while(t) { n++; t = t->next; }
        return sortedListToBST(head, 0, n-1);
    }

    TreeNode *Ex109::sortedListToBST(ListNode *& list, int start, int end) 
    {
        if (start > end) return NULL;
        // same as (start+end)/2, avoids overflow
        int mid = start + (end - start) / 2;
        TreeNode *leftChild = sortedListToBST(list, start, mid-1);
        TreeNode *parent = new TreeNode(list->val);
        parent->left = leftChild;
        list = list->next;
        parent->right = sortedListToBST(list, mid+1, end);
        return parent;
    }
}