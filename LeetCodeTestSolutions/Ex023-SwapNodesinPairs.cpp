/*
Given a linked list, swap every two adjacent nodes and return 
its head. 

For example,
 Given 1->2->3->4, you should return the list as 2->1->4->3. 

Your algorithm should use only constant space. You may not 
modify the values in the list, only nodes itself can be changed. 

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        
    }
};
*/

#include "Ex023-SwapNodesinPairs.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex23::swapPairs(ListNode *head)
    {
        ListNode dummy(0);
        ListNode *p, *q;
        dummy.next = head;
        p = &dummy; q = head;
        while(q && q->next)
        {
            p->next = q->next;
            q->next = p->next->next;
            p->next->next = q;
            // move forward
            p = q;
            q = q->next;
        }

        return dummy.next;
    }
}