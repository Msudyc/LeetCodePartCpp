/*
Determine whether an integer is a palindrome. Do this without 
extra space.

class Solution {
public:
    bool isPalindrome(int x) {
        
    }
};
*/

#include "Ex009-PalindromeNumber.h"

namespace LeetCodeTestSolutions
{
    bool Ex9::isPalindrome(int x)
    {
        if(x < 0) return false;
        else if(x < 10) return true;
        else
        {
            while(x >= 10)
            {
                int r = x % 10, t = x, l = 1;
                while(t >= 10){ t /= 10; l *= 10; }
                if(t != r) return false;
                if((x - t * l) >= l/10)
                    x = (x - t * l - r) / 10;
                else
                    x = (x + l/10 - t * l - r) / 10 + 1;
            }

            return true;
        }
    }
}