/*
You are given a string, S, and a list of words, L, that 
are all of the same length. Find all starting indices of 
substring(s) in S that is a concatenation of each word 
in L exactly once and without any intervening characters. 

For example, given:
S: "barfoothefoobarman"
L: ["foo", "bar"] 

You should return the indices: [0,9].
 (order does not matter).

class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        
    }
};
*/

#include <map>
#include "Ex029-SubstringwithConcatenationofAllWords.h"

namespace LeetCodeTestSolutions
{
    vector<int> Ex29::findSubstring(string S, vector<string> &L)
    {
        vector<int> res;
        if(L.size() == 0) return res;
        int n = S.size(), ln = L.size(), len = L[0].size();
        map <string, int> mapL;
        for (string it : L ) mapL[it]++;
        map <string, int> mapMatch;
        
        for (int offset = 0; offset < len; offset++) 
        {
            mapMatch.clear();
            int left = offset, count = 0;
            for (int p = offset; p + len <= n ; p += len) 
            {
                string str = S.substr(p, len);
                if (mapL.count(str) > 0)
                {
                    mapMatch[str]++;
                    if (mapMatch[str] <= mapL[str]) count++;
                    if (ln == count) res.push_back(left);
                    // reach ln, remove the first match
                    if ( (p - left)/len + 1 == ln ) 
                    {
                        str = S.substr(left, len);
                        mapMatch[str]--;
                        // decrease count if str was counted
                        if (mapMatch[str] < mapL[str]) count--;
                        left += len;
                    }
                }
                else
                {
                    mapMatch.clear();
                    left = p + len;
                    count = 0;
                }
            }
        }
        
        return res;
    }
}