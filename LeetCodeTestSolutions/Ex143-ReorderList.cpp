/*
Given a singly linked list L: L0→L1→…→Ln-1→Ln, reorder it
to: L0→Ln→L1→Ln-1→L2→Ln-2→… 

You must do this in-place without altering the nodes' values.

For example,
 Given {1,2,3,4}, reorder it to {1,4,2,3}.

class Solution {
public:
    void reorderList(ListNode *head) {
        
    }
};
*/

#include "Ex143-ReorderList.h"

namespace LeetCodeTestSolutions
{
    void Ex143::reorderList(ListNode *head)
    {
        if(!head) return;
        ListNode *p1 = head, *p2 = head->next;
        while(p2 && p2->next) { p1 = p1->next; p2 = p2->next->next; }
        ListNode *p3 = p1;
        p2 = p1->next;
        p1 = NULL;
        p3->next = NULL;
 
        while(p2)
        {
            p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }

        p2 = head;
        while(p1)
        {
            p3 = p1->next;
            p1->next = p2->next;
            p2->next = p1;
            p2 = p1->next;
            p1 = p3;
        }
    }
}