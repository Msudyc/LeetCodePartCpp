/*
Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes 
of the first two lists.

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        
    }
};
*/

#include "Ex064-MergeTwoSortedLists.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex64::mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode head(0);
        ListNode *cur = &head;
        while (l1 != NULL && l2 != NULL) 
        {
            if (l1->val <= l2->val) { cur->next = l1; l1 = l1->next;  } 
            else { cur->next = l2; l2 = l2->next; }  
            cur = cur->next;
        }
        
        if (l1 != NULL) cur->next = l1; 
        else if (l2 != NULL) cur->next = l2;  
        return head.next;
    }
}