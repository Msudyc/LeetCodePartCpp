/*
Given two words (start and end), and a dictionary, find 
the length of shortest transformation sequence from start
to end, such that: 

1.Only one letter can be changed at a time
2.Each intermediate word must exist in the dictionary

For example, 

Given:
start = "hit"
end = "cog"
dict = ["hot","dot","dog","lot","log"]

As one shortest transformation is "hit" -> "hot" -> "dot" ->
"dog" -> "cog", return its length 5. 

Note:

.Return 0 if there is no such transformation sequence.
.All words have the same length.
.All words contain only lowercase alphabetic characters.

class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        
    }
};
*/

#include <queue>
#include "Ex126-WordLadder.h"

namespace LeetCodeTestSolutions
{
    int Ex126::ladderLength(string start, string end, unordered_set<string> &dict)
    {
        queue<pair<string, int>> q;
        unordered_set<string> visited;
        q.push(make_pair(start, 1));
        visited.insert(start);
        while (!q.empty())
        {
            string curStr = q.front().first;
            int curStep = q.front().second;
            q.pop();
            for (int i = 0; i < (int)curStr.size(); i++)
            {
                string tmp = curStr;
                for (int j = 0; j < 26; j++)
                {
                    tmp[i] = j +'a';
                    if(tmp == end) return curStep + 1;
                    if(visited.find(tmp) == visited.end() && dict.find(tmp) != dict.end())
                    {
                        q.push(make_pair(tmp, curStep+1));
                        visited.insert(tmp);
                    }
                }
            }
        }
        
        return 0;
    }
}