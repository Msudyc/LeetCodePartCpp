/*
Given n non-negative integers representing an elevation 
map where the width of each bar is 1, compute how much 
water it is able to trap after raining. 

For example, 
 Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6. 

class Solution {
public:
    int trap(int A[], int n) {
        
    }
};
*/

#include <vector>
#include "Ex041-TrappingRainWater.h"

namespace LeetCodeTestSolutions
{
    int Ex41::trap(int A[], int n)
    {
        vector<int> l(n), r(n);
        int lmax = 0, rmax = 0, v = 0;
        for (int i = 0; i < n; i++) { l[i] = lmax; lmax = max(lmax, A[i]); }
        for (int i = n - 1; i >= 0; i--) { r[i] = rmax; rmax = max(rmax, A[i]); }
        for (int i = 0; i < n; i++)
        {
            int threshold = min(l[i], r[i]);
            if (A[i] < threshold) v += threshold - A[i];
        }
        
        return v;
    }
}