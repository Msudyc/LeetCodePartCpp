/*
'?' Matches any single character.
'*' Matches any sequence of characters (including 
    the empty sequence).

The matching should cover the entire input string 
 (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "*") → true
isMatch("aa", "a*") → true
isMatch("ab", "?*") → true
isMatch("aab", "c*a*b") → false

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        
    }
};
*/

#include <cstdlib>
#include "Ex043-WildcardMatching.h"

namespace LeetCodeTestSolutions
{
    bool Ex43::isMatch(const char *s, const char *p)
    {
        const char *star = NULL;
        const char *ss = s; 
        while (*s)
        {
            if ((*p == '?') || (*p == *s)){ s++; p++; continue; }
            if (*p == '*') { star = p++; ss = s; continue; }
            if (star){ p = star + 1; s = ++ss; continue; }
            return false;
        }

        while (*p == '*'){ p++; }
        return !*p;
    }
}