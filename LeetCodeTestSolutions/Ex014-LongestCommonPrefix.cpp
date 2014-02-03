/*
Write a function to find the longest common prefix string 
amongst an array of strings. 

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        
    }
};
*/

#include "Ex014-LongestCommonPrefix.h"

namespace LeetCodeTestSolutions
{
    string Ex14::longestCommonPrefix(vector<string> &strs)
    {
        // brute force O(mn)
        if(strs.empty()) return "";
        for(int i = 0; i < (int)strs[0].size(); i++)
            for(int j = 1; j < (int)strs.size(); j++)
                if(strs[j][i] != strs[0][i]) return strs[0].substr(0, i);
        return strs[0];
    }
}