/*
Given an unsorted array of integers, find the length of 
the longest consecutive elements sequence. 

For example,
 Given [100, 4, 200, 1, 3, 2],
 The longest consecutive elements sequence is [1, 2, 3, 4]. 
 Return its length: 4. 

Your algorithm should run in O(n) complexity. 

class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        
    }
};
*/

#include <map>
#include "Ex128-LongestConsecutiveSequence.h"

namespace LeetCodeTestSolutions
{
    int Ex128::longestConsecutive(vector<int> &num)
    {
        map<int, bool> mp;
        for (int i = 0; i < (int)num.size(); i++) 
            mp[num[i]] = true;
        int res = 0;
        for (int i = 0; i < (int)num.size(); i++)
        {
            int mx = 1;      
            int fd = num[i];
            mp.erase(num[i]);
            while(mp.find(fd + 1) != mp.end())
            {
                mx++;
                mp.erase(fd + 1);
                fd++;
            }
             
            fd = num[i];
            while(mp.find(fd - 1) != mp.end())
            {
                mx++;
                mp.erase(fd-1);
                fd--;
            }
             
            res = max(res, mx);
        }
         
        return res;
    }
}