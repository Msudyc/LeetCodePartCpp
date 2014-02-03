/*
Implement regular expression matching with support 
for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string 
(not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "a*") → true
isMatch("aa", ".*") → true
isMatch("ab", ".*") → true
isMatch("aab", "c*a*b") → true

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        
    }
};
*/

#include <vector>
#include "Ex010-RegularExpressionMatching.h"

namespace LeetCodeTestSolutions
{
    bool Ex10::isMatch(const char *s, const char *p)
    {
        if (*p == '\0') return *s == '\0';
        if(*(p + 1) != '*')
        {
            return ((*p == *s) || (*p == '.' && *s != '\0')) && isMatch(s + 1, p + 1);
        }

        while((*p == *s) || (*p == '.' && *s != '\0'))
        {
            if(isMatch(s, p + 2)) return true;
            s++;
        }

        return isMatch(s, p + 2);
    }

    bool Ex10::isMatch1(const char *s, const char *p)
    {
        if (*p == '\0') return *s == '\0';
        int slen = strlen(s), plen = strlen(p);
        vector<vector<bool>> dp(plen + 1, vector<bool>(slen + 1, false));
        dp[0][0] = true;
        for(int i = 1; i <= plen; i++) 
        {
            switch(p[i-1]) 
            {
            case '*':
                dp[i][0] = i > 1 ? dp[i-2][0] : false;
                if(i < 2) continue;
                if(p[i - 2] != '.')
                {
                    for(int j = 1; j <= slen; j++)
                    {
                        if(dp[i-1][j] || (i >= 2 && dp[i-2][j]) || 
                            (j >= 2 && dp[i][j-1] && s[j-1] == s[j-2] && s[j-2] == p[i-2]))
                            dp[i][j] = true;
                    }
                }
                else
                {
                    int j = 1;
                    while(!dp[i-2][j] && j <= slen && !dp[i-1][j]) j++;
                    for(; j <= slen; j++) dp[i][j] = true;
                }
                break;
            default :
                for(int j = 1; j <= slen; j++) 
                    if(dp[i-1][j-1] && (s[j-1] == p[i-1] || p[i-1]=='.'))
                        dp[i][j] = true;
                break;
            }
        }
        
        return dp[plen][slen];
    }
}