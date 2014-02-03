/*
Implement next permutation, which rearranges numbers into 
the lexicographically next greater permutation of numbers. 

If such arrangement is not possible, it must rearrange it 
as the lowest possible order (ie, sorted in ascending order). 

The replacement must be in-place, do not allocate extra memory. 

Here are some examples. Inputs are in the left-hand column and 
its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

class Solution {
public:
    void nextPermutation(vector<int> &num) {
        
    }
};
*/

#include "Ex030-NextPermutation.h"

namespace LeetCodeTestSolutions
{
    void Ex30::nextPermutation(vector<int> &num)
    {
        vector<int>::iterator it = num.end() - 1;
        while (it != num.begin() && (*(it-1) >= *it)) it--;
        if (it == num.begin()) { reverse(it, num.end()); return; }
        it--; //left elem to be exchanged

        vector<int>::iterator rit = it + 1;
        while (rit != num.end() && *rit > *it) rit++;
        rit--; //right elem to be exchanged

        iter_swap(it, rit);
        reverse(it + 1, num.end());
    }
}