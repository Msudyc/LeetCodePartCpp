/*
Given a linked list, return the node where the cycle 
begins. If there is no cycle, return null. 

Follow up:
 Can you solve it without using extra space? 

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
    }
};
*/

#include "Ex142-LinkedListCycleII.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex142::detectCycle(ListNode *head)
    {
        if(!head) return NULL;
        if(head->next == head) return head;
        ListNode *pre = head, *p = head;
        do
        {
            if(p && p->next && p->next->next) 
            {
                p=p->next->next; 
            } 
            else return NULL; 
            pre = pre->next;
        }
        while(pre != p); 
        pre = head;
        while(pre != p)
        {
            pre = pre->next;
            p = p->next;
        }
        
        return pre;
    }
}