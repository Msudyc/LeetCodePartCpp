/*
Returns a pointer to the first occurrence of needle in 
haystack, or null if needle is not part of haystack. 

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        
    }
};
*/

#include "Ex027-ImplementstrStr.h"

namespace LeetCodeTestSolutions
{
    char *Ex27::strStr(char *haystack, char *needle)
    {
        if (!*needle) return haystack;
        char *p1 = haystack, *p2 = needle;
        char *p1Adv = haystack;
        while (*++p2) p1Adv++;
        while (*p1Adv) 
        {
            char *p1Begin = p1;
            p2 = needle;
            while (*p1 && *p2 && *p1 == *p2) { p1++; p2++; }
            if (!*p2) return p1Begin;
            p1 = p1Begin + 1;
            p1Adv++;
        }

        return NULL;
    }
}