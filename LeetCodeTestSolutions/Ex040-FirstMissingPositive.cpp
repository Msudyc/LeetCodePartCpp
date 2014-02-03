/*
Given an unsorted integer array, find the first missing 
positive integer. 

For example,
 Given [1,2,0] return 3,
 and [3,4,-1,1] return 2. 

Your algorithm should run in O(n) time and uses constant
space. 

class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        
    }
};
*/

#include "Ex040-FirstMissingPositive.h"

namespace LeetCodeTestSolutions
{
    int Ex40::firstMissingPositive(int A[], int n)
    {
        for (int i=0; i<n; ++i)
            if (A[i] > 0 && A[i] < n)
            {
                if (A[i]-1 != i && A[A[i]-1] != A[i])
                {
                    int temp = A[A[i]-1];
                    A[A[i]-1] = A[i];
                    A[i] = temp;
                    i--;
                }
            }

        for (int j=0; j<n; ++j)
            if (A[j]-1 != j) return j+1;

        return n+1;
    }
}