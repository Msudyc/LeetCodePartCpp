/*
Given an array of strings, return all groups of strings 
that are anagrams. 

Note: All inputs will be in lower-case.

class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        
    }
};
*/

#include <sstream>
#include <map>
#include "Ex048-Anagrams.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex48::anagrams(vector<string> &strs)
    {
        map<string, vector<string>> strmap;
        for (string str : strs) 
        {
            vector<int> counts(26, 0);
            for (char c : str) counts[c - 'a']++;
            stringstream ss;
            for (int i = 0; i < 26; i++)
                if (counts[i] > 0) ss << counts[i] << (char)('a' + i);
            strmap[ss.str()].push_back(str);
        }

        vector<string> ans;
        for (auto &sp : strmap)
            if (sp.second.size() > 1)
                ans.insert(ans.end(), sp.second.begin(), sp.second.end());

        return ans;
    }
}