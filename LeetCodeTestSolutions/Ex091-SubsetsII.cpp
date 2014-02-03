/*
Given a collection of integers that might contain duplicates, 
S, return all possible subsets. 

Note:

.Elements in a subset must be in non-descending order.
.The solution set must not contain duplicate subsets.

For example,
 If S = [1,2,2], a solution is: 
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]

class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        
    }
};
*/

#include <algorithm>
#include "Ex091-SubsetsII.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex91::subsetsWithDup(vector<int> &S)
    {
        sort(S.begin(), S.end());
        vector<vector<int> > res;
        vector<int> r;
        res.push_back(r);
        r.push_back(S[0]);
        res.push_back(r);
        int pre = S[0];
        int count = 1;
        for (int i = 1; i < (int)S.size(); i++)
        {
            int st=0; 
            int sz = res.size();
            if (S[i] == pre) st = sz - count;
            count =0;
            for (int j = st; j < sz; j++)
            {
                r = res[j];
                r.push_back(S[i]);
                res.push_back(r);
                count++;
            }
            
            pre=S[i];
        }
        
        return res;
    }

    vector<vector<int> > Ex91::subsetsWithDup1(vector<int> &S)
    {
        vector<int> path;
        vector<vector<int> > result;
        sort(S.begin(), S.end());
        sub(S, 0, path, result);
        return result;
    }

    void Ex91::sub(vector<int> &s, int begin, vector<int> &path, vector<vector<int> > &result) 
    {
        result.push_back(path);
        for (int i = begin; i < (int)s.size(); i++) 
        {
            if (i != begin && s[i] == s[i - 1]) continue;
            path.push_back(s[i]);
            sub(s, i + 1, path, result);
            path.pop_back();
        }
    }
}