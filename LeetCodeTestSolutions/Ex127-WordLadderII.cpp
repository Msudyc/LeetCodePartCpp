/*
Given two words (start and end), and a dictionary, find 
all shortest transformation sequence(s) from start to end,
such that: 

1.Only one letter can be changed at a time
2.Each intermediate word must exist in the dictionary

For example, 

Given:
start = "hit"
end = "cog"
dict = ["hot","dot","dog","lot","log"]

Return
  [
    ["hit","hot","dot","dog","cog"],
    ["hit","hot","lot","log","cog"]
  ]

Note:

.All words have the same length.
.All words contain only lowercase alphabetic characters.

class Solution {
public:
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        
    }
};
*/

#include <queue>
#include "Ex127-WordLadderII.h"

namespace LeetCodeTestSolutions
{
    vector<vector<string>> Ex127::findLadders(string start, string end, unordered_set<string> &dict)
    {
        vector<vector<string>> ans;
        queue<pair<string, int>> Q;
        unordered_map<string, vector<string>> P;
        unordered_map<string, int> L;
        Q.push(make_pair(start, 1));
        P[start].push_back(start);
        L[start] = 1;
        int ladder_len = -1;
        while (!Q.empty()) 
        {
            string str = Q.front().first;
            int len = Q.front().second;
            Q.pop();
            if (ladder_len > 0 && len >= ladder_len) break;
            for (int i = 0; i < (int)str.size(); i++)
                for (int e = 0; e < 26; ++e) 
                {
                    char c = 'a' + e;
                    if (str[i] == c) continue;
                    string tmp(str);
                    tmp[i] = c;
                    if (tmp == end) 
                    {
                        ladder_len = len + 1;
                        vector<string> v;
                        v.push_back(end);
                        v.push_back(str);
                        getLadder(ans, P, v, str);
                    } 
                    else if (dict.find(tmp) == dict.end()) continue;
                    else if (P.find(tmp) == P.end()) 
                    {
                        P[tmp].push_back(str);
                        L[tmp] = len + 1;
                        Q.push(make_pair(tmp, len + 1));
                    } 
                    else if (L[tmp] == len + 1) P[tmp].push_back(str);
                }
        }
        
        return ans;
    }

    void Ex127::getLadder(vector<vector<string>> &ans, unordered_map<string, vector<string>> &P, vector<string> &v, string str) 
    {
        if (P[str].size() == 1 && P[str][0] == str) 
            ans.push_back(vector<string>(v.rbegin(), v.rend()));
        else
            for (string p : P[str]) 
            {
                v.push_back(p);
                getLadder(ans, P, v, p);
                v.pop_back();
            }
    }
}