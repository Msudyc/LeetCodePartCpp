/*
Merge k sorted linked lists and return it as one sorted list. 
Analyze and describe its complexity.

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        
    }
};
*/

#include "Ex022-MergekSortedLists.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex22::mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0) return NULL;
        ListNode dummy(0);
        dummy.next = lists[0];
        ListNode *p, *q, *temp;
        for (int i = 1; i < (int)lists.size(); i++)
        {
            p = &dummy; q = lists[i];
            while(q)
            {
                if(!p->next) { p->next = q; break; } //critical
                if(p->next->val < q->val) p = p->next;
                else
                {
                    temp = p->next;
                    p->next = q;
                    q = q->next;
                    p = p->next;
                    p->next = temp;
                }
            }
        }

        return dummy.next;
    }
}