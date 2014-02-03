/*
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want 
a challenge, please do not see below and ask yourself what are 
the possible input cases.

Notes: It is intended for this problem to be specified vaguely 
(ie, no given input specs). You are responsible to gather all 
the input requirements up front. 

class Solution {
public:
    int atoi(const char *str) {
        
    }
};
*/

#include <climits>
#include "Ex008-StringtoInteger.h"

namespace LeetCodeTestSolutions
{
    int Ex8::atoi(const char *str)
    {
        bool minus = false;
        if(str == 0) return 0;

        while(*str == ' ') str ++;
        if(*str == '+') str++;
        if(*str == '-') { minus = true; str++; }

        int r = 0;
        while(*str != '\0' && *str >= '0' && *str <= '9')
        {
            if(r > INT_MAX/10)
            {
                return minus ? INT_MIN : INT_MAX;
            }
            else if(r == INT_MAX/10)
            {
                if(minus && *str > '8') return INT_MIN;
                if(!minus && *str > '7') return INT_MAX;
            }

            r = r * 10 + *str - '0';
            str ++;
        }

        if(minus) r = -r;
        return r;
    }
}