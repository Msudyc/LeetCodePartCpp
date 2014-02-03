/*
Find the contiguous subarray within an array (containing 
at least one number) which has the largest sum. 

For example, given the array [−2,1,−3,4,−1,2,1,−5,4], the 
contiguous subarray [4,−1,2,1] has the largest sum = 6. 

click to show more practice.

More practice: 
If you have figured out the O(n) solution, try coding another 
solution using the divide and conquer approach, which is more 
subtle.

class Solution {
public:
    int maxSubArray(int A[], int n) {
        
    }
};
*/

#include <algorithm>
#include "Ex052-MaximumSubarray.h"

namespace LeetCodeTestSolutions
{
    int Ex52::maxSubArray(int A[], int n)
    {
        int ret = A[0], sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum = max(sum + A[i], A[i]);
            ret = max(ret, sum);
        }

        return ret;
    }

    int Ex52::maxSubArray1(int A[], int n)
    {
        if(n == 0) return 0;
        return maxSubArrayHelper(A, 0, n-1);
    }

    int Ex52::maxSubArrayHelper(int A[], int left, int right) 
    {
        if(right == left) return A[left];
        int middle = (left + right)/2;
        int leftans = maxSubArrayHelper(A, left, middle);
        int rightans = maxSubArrayHelper(A, middle+1, right);
        int leftmax = A[middle];
        int rightmax = A[middle+1];
        int temp = 0;
        for(int i=middle; i >= left; i--) 
        {
            temp += A[i];
            if(temp > leftmax) leftmax = temp;
        }

        temp = 0;
        for(int i=middle+1; i<= right; i++) 
        {
            temp += A[i];
            if(temp > rightmax) rightmax = temp;
        }

        return max(max(leftans, rightans), leftmax + rightmax);
    }
}