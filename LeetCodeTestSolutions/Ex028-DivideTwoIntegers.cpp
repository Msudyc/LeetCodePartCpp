/*
Divide two integers without using multiplication, 
division and mod operator. 

class Solution {
public:
    int divide(int dividend, int divisor) {

    }
}
*/

#include "Ex028-DivideTwoIntegers.h"

namespace LeetCodeTestSolutions
{
    int Ex28::divide(int dividend, int divisor)
    {
        long long a = abs((long long)dividend);;
        long long b = abs((long long)divisor);

        long long ret = 0;
        while (a >= b) 
        {
            long long c = b;
            for (int i = 0; a >= c; i++, c <<= 1) 
            {
                a -= c;
                ret += (long long) 1 << i;
            }
        }

        return ((dividend^divisor)>>31) ? (int)(-ret) : (int)(ret);
    }
}