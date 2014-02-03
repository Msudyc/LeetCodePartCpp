/*
You are given two linked lists representing two non-negative 
numbers. The digits are stored in reverse order and each of 
their nodes contain a single digit. Add the two numbers and 
return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        
    }
};
*/

#include "Ex004-AddTwoNumbers.h"

namespace LeetCodeTestSolutions
{
    ListNode * Ex4::addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = NULL;
        if(l1 && !l2) result = l1;
        else if(l2 && !l1) result = l2;
        else if (l1 && l2)
        {
            ListNode *p = NULL, *q = NULL;
            int carry = 0;
            while(l1 && l2)
            {
                q = new ListNode((l1->val + l2->val + carry) % 10);
                carry = (l1->val + l2->val + carry) / 10;
                if(!result) { result = q, p = q; }
                else { p->next = q, p = p->next; };

                l1 = l1->next;
                l2 = l2->next;
            }

            if(!l1 && !l2) { if (carry != 0) p->next = new ListNode(carry); }
            else
            {
                ListNode * t = l1 != NULL? l1 : l2;
                p->next = t;

                while(carry != 0)              
                {  
                    int value = (t->val + carry) % 10;
                    carry = (t->val + carry) / 10;
                    t->val = value;                  
                    if(t->next != NULL) t = t->next;
                    else
                    {
                        if(carry != 0) t->next = new ListNode(1);
                        break;
                    }
                }
            }          
        }

        return result;
    }
}