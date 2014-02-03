/*
Sort a linked list using insertion sort.

class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        
    }
};
*/

#include "Ex147-InsertionSortList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex147::insertionSortList(ListNode *head)
    {
        if(!head) return head;
        ListNode *cur = head->next,  *tmp = NULL;
        while(cur)
        {
            tmp = head;
            while(tmp->val < cur->val && tmp != cur) tmp = tmp->next; 
            if(tmp != cur)
            {
                int first = cur->val, second; 
                while(tmp != cur)
                {
                    second = tmp->val;
                    tmp->val = first; 
                    first = second; 
                    tmp = tmp->next; 
                }
                
                tmp->val = first;
            }
            
            cur = cur->next;
        }
        
        return head;
    }
}