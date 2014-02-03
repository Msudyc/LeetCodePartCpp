/*
Given a sorted array of integers, find the starting and 
ending position of a given target value.

Your algorithm's runtime complexity must be in the order 
of O(log n).

If the target is not found in the array, return [-1, -1].

For example,
 Given [5, 7, 7, 8, 8, 10] and target value 8,
 return [3, 4]. 

class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        
    }
};
*/

#include "Ex033-SearchforaRange.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex33::searchRange(int A[], int n, int target)
    {
        vector<int> range(2, -1);
        int lower = 0, upper = n;
        int mid;

        // Search for lower bound
        while (lower < upper) 
        {
            mid = (lower + upper) / 2;
            if (A[mid] < target) lower = mid + 1;
            else upper = mid;
        }

        // If the target is not found, return (-1, -1)
        if (A[lower] != target) return range;
        range[0] = lower;

        // Search for upper bound
        upper = n;
        while (lower < upper) 
        {
            mid = (lower + upper) / 2;
            if (A[mid] > target) upper = mid;
            else lower = mid + 1;
        }

        range[1] = upper - 1;
        return range;
    }
}