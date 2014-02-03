/*
Given a linked list, remove the nth node from the end of 
list and return its head.

For example,
   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked 
   list becomes 1->2->3->5.

Note:
 Given n will always be valid.
 Try to do this in one pass. 

 Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
    }
};
*/

#include "Ex019-RemoveNthNodeFromEndofList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex19::removeNthFromEnd(ListNode *head, int n)
    {
        ListNode dummy(0); dummy.next = head;
        ListNode *p = &dummy, *q = head;
        int k = 0;
        while(k < n) { q = q->next; k++; }
        while(q)
        {
            q = q->next;
            p = p->next;            
        }
        
        p->next = p->next->next;
        return dummy.next;
    }
}