/*
Given a number represented as an array of digits, plus 
one to the number.

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        
    }
};
*/

#include "Ex067-PlusOne.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex67::plusOne(vector<int> &digits)
    {
        int i;
        for(i = (int)digits.size() - 1; i >= 0; i--)
        {
            if(digits[i]!=9) { digits[i]++; return digits; }
            else digits[i] = 0;
        }

        if(i < 0) digits.insert(digits.begin(), 1);
        return digits;
    }
}