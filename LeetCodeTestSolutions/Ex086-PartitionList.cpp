/*
Given a linked list and a value x, partition it such that 
all nodes less than x come before nodes greater than or 
equal to x. 

You should preserve the original relative order of the nodes 
in each of the two partitions. 

For example,
 Given 1->4->3->2->5->2 and x = 3,
 return 1->2->2->4->3->5. 

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        
    }
};
*/

#include "Ex086-PartitionList.h"

namespace LeetCodeTestSolutions
{
    ListNode *Ex86::partition(ListNode *head, int x)
    {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *end = &dummy, *pre = &dummy, *cur = head;
        while (cur) 
        {
            if (cur->val < x) 
            {
                if (pre != end) 
                {
                    pre->next = cur->next;
                    cur->next = end->next;
                    end->next = cur;
                    cur = pre;
                }
                
                end = end->next;
            }
            
            pre = cur;
            cur = cur->next;
        }
        
        return dummy.next;
    }
}