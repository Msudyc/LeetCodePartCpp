/*
Given a string s, partition s such that every substring
of the partition is a palindrome. Return the minimum cuts 
needed for a palindrome partitioning of s. 

For example, given s = "aab",Return 1 since the palindrome
partitioning ["aa","b"] could be produced using 1 cut. 

class Solution {
public:
    int minCut(string s) {
        
    }
};
*/

#include <vector>
#include "Ex132-PalindromePartitioningII.h"

namespace LeetCodeTestSolutions
{
    int Ex132::minCut(string s)
    {
        int len = s.size();
        vector<int> dp(len + 1);
        vector<vector<bool> > palin(len, vector<bool>(len, false));
        for(int i = 0; i <= len; i++) dp[i] = len - i;
        for(int i = len-1; i >= 0; i--)
            for(int j = i; j < len; j++)
                if(s[i] == s[j] && (j-i < 2 || palin[i+1][j-1]))
                {
                    palin[i][j] = true;
                    dp[i] = min(dp[i], dp[j+1] + 1);
                }
                
        return dp[0] - 1;
    }
}