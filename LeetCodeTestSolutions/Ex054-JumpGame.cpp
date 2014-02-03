/*
Given an array of non-negative integers, you are initially 
positioned at the first index of the array. 

Each element in the array represents your maximum jump length 
at that position. 

Determine if you are able to reach the last index. 

For example:
 A = [2,3,1,1,4], return true. 

A = [3,2,1,0,4], return false. 

class Solution {
public:
    bool canJump(int A[], int n) {
        
    }
};
*/

#include <algorithm>
#include "Ex054-JumpGame.h"

namespace LeetCodeTestSolutions
{
    bool Ex54::canJump(int A[], int n)
    {
        int reach = 1;
        for (int i = 0; i < reach && reach < n; i++)
            // num = index + 1
            reach = max(reach, A[i] + i + 1);
        return reach >= n;
    }
}