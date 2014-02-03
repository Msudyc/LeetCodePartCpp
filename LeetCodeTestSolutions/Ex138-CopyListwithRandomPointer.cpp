/*
A linked list is given such that each node contains an 
additional random pointer which could point to any node 
in the list or null. 

Return a deep copy of the list. 

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        
    }
};
*/

#include "Ex138-CopyListwithRandomPointer.h"

namespace LeetCodeTestSolutions
{
    RandomListNode *Ex138::copyRandomList(RandomListNode *head)
    {
        if(!head) return NULL;
        RandomListNode *result = NULL, *pold = head, *pnew = result, *poldNext = NULL;
        do
        {
            poldNext = pold->next;
            pnew = new RandomListNode(pold->label);
            pold->next = pnew;
            pnew->next = poldNext;
            if(result == NULL) result = pnew;
            pold = poldNext;
        }
        while(pold);

        pold = head;
        while(pold)
        {
            if(pold->random) pold->next->random = pold->random->next;
            pold = pold->next->next;
        }
        
        pold = head;
        pnew = result;
        while(pnew->next)
        {
            pold->next = pnew->next;
            pold = pold->next;
            pnew->next = pold->next;
            pnew = pnew->next;
        }
        
        pold->next = NULL;
        pnew->next = NULL;
        return result;
    }
}