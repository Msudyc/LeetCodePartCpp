/*
Given a sorted linked list, delete all nodes that have 
duplicate numbers, leaving only distinct numbers from the 
original list. 

For example,
 Given 1->2->3->3->4->4->5, return 1->2->5.
 Given 1->1->1->2->3, return 2->3. 

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        
    }
};
*/

#include "Ex083-RemoveDuplicatesfromSortedListII.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex83::deleteDuplicates(ListNode *head)
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *pre = &dummy, *cur = head;
        while (cur) 
        {
            int temp = cur->val;
            if (cur->next && cur->next->val == temp) 
            {
                while (cur && cur->val == temp) 
                {
                    pre->next = cur->next;
                    /*delete cur;*/
                    cur = pre->next;
                }

                cur = pre;
            }

            pre = cur;
            cur = cur->next;
        }

        return dummy.next;
    }
}