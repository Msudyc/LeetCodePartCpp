/*
Sort a linked list in O(n log n) time using constant space
complexity.

class Solution {
public:
    ListNode *sortList(ListNode *head) {
        
    }
};
*/

#include "Ex148-SortList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex148::sortList(ListNode *head)
    {
        if(!head || !head->next)return head;
        else
        {
            ListNode *fast = head, *slow = head;
            while(fast->next && fast->next->next)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            
            fast = slow;
            slow = slow->next;
            fast->next = NULL;
            fast = sortList(head);
            slow = sortList(slow);
            return merge(fast,slow);
        }
    }
    
    ListNode *Ex148::merge(ListNode *head1, ListNode *head2)
    {
        if(!head1) return head2;
        if(!head2) return head1;
        ListNode dummy(0), *p;
        p = &dummy;
        while(head1 && head2)
        {
            if(head1->val < head2->val)
            {
                p->next = head1;
                head1 = head1->next;
            }
            else
            {
                p->next = head2;
                head2 = head2->next;
            }
            
            p = p->next;
        }
        
        if(head1) p->next = head1;
        else if(head2) p->next = head2;
        return dummy.next;
    }
}