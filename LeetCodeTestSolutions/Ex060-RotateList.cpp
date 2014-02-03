/*
Given a list, rotate the list to the right by k places, 
where k is non-negative.

For example:
 Given 1->2->3->4->5->NULL and k = 2,
 return 4->5->1->2->3->NULL.

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        
    }
};
*/

#include "Ex060-RotateList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex60::rotateRight(ListNode *head, int k)
    {
        if(!head || !head->next) return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *tail = dummy;
        int l = 0;
        while(tail->next) { l++; tail = tail->next; }
        int move = l - k%l;
        for(int i=0; i < move; i++)
        {
            ListNode *dummy_next = dummy->next;
            dummy->next = dummy_next->next;
            tail->next = dummy_next;
            tail = tail->next;
            tail->next = NULL;
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
}