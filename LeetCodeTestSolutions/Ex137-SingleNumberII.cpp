/*
Given an array of integers, every element appears three 
times except for one. Find that single one. 

Note:
 Your algorithm should have a linear runtime complexity. 
 Could you implement it without using extra memory? 

 class Solution {
public:
    int singleNumber(int A[], int n) {
        
    }
};
*/

#include "Ex137-SingleNumberII.h"

namespace LeetCodeTestSolutions
{
    int Ex137::singleNumber(int A[], int n)
    {
        int x[32] = {0};
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < 32; j++) 
            {
                x[j] += (A[i] >> j) & (1);
                x[j] %= 3;
            }
        }

        int res = 0;
        for(int i = 0; i < 32; i++) 
            res += (x[i] << i);
        return res;
    }

    int Ex137::singleNumber1(int A[], int n)
    {
        int n1 = 0, n2 = 0;
        for (int i = 0; i < n; i++) 
        {
           int n0 = ~(n1|n2);
           n2 = (n2&~A[i]) | (n1&A[i]); 
           n1 = (n1&~A[i]) | (n0&A[i]); 
        }
        
        return n1;
    }
}