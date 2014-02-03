/*
Given a string, find the length of the longest substring without 
repeating characters. For example, the longest substring without 
repeating letters for "abcabcbb" is "abc", which the length is 3. 
For "bbbbb" the longest substring is "b", with the length of 1.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    }
};
*/

#include <algorithm>
#include <string>
#include "Ex003-LongestSubstringWithoutRepeatingCharacters.h"

namespace LeetCodeTestSolutions
{
    int Ex3::lengthOfLongestSubstring(string s)
    {
        int maxLen = 0, n = s.length(), j = 0;
        bool hash[256] = {0};

        for(int i = 0; i < n; i++)
        {
            if(hash[s[i]])
            {
                maxLen = max(maxLen, i - j);
                while (s[j] != s[i])
                {
                    hash[s[j]] = 0;
                    j++;
                }

                j++;
            }
            else
                hash[s[i]] = 1;
        }

        maxLen = max(maxLen, n - j);
        return maxLen;
    }
}