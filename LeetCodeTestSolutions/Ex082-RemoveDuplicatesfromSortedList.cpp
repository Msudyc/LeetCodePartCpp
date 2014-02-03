/*
Given a sorted linked list, delete all duplicates such 
that each element appear only once. 

For example,
 Given 1->1->2, return 1->2.
 Given 1->1->2->3->3, return 1->2->3. 

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        
    }
};
*/

#include "Ex082-RemoveDuplicatesfromSortedList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex82::deleteDuplicates(ListNode *head)
    {
        ListNode *p = head, *q;
        if (p == NULL || p->next == NULL) return p;
        q = p->next;
        // invariant: no duplication in range [head, p] && q == p->next
        while (q != NULL)
        {
            if (q->val != p->val) { p = p->next; q = q->next; }
            else
            {
                // find duplicated value, range [head,p] is not changed.
                ListNode *t = q;
                q = q->next;
                p->next = q;
                // avoid memory leak.
                /*delete t;*/
            }
        }
        
        return head;
    }
}