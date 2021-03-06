﻿/*
Given a set of candidate numbers (C) and a target number (T), 
find all unique combinations in C where the candidate numbers 
sums to T. 

The same repeated number may be chosen from C unlimited number
of times. 

Note:

.All numbers (including target) will be positive integers.
.Elements in a combination (a1, a2, … , ak) must be in 
 non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
.The solution set must not contain duplicate combinations.

For example, given candidate set 2,3,6,7 and target 7, A 
solution set is: 

[7] 
[2, 2, 3] 

class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        
    }
};
*/

#include <algorithm>
#include "Ex038-CombinationSum.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex38::combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        if (candidates.size() == 0) return res;
        sort(candidates.begin(), candidates.end());
        vector<int> r;
        dfs(candidates, target, res, r, 0);
        return res;
    }

    void Ex38::dfs(vector<int> &candidates, int target, vector<vector<int> > &res, vector<int> &r, int i)
    {
        if (target < 0) return;
        else if (target == 0) res.push_back(r);
        else
            while (i < (int)candidates.size() && target-candidates[i] >= 0)
            {
                r.push_back(candidates[i]);
                dfs(candidates, target-candidates[i], res, r, i);
                i++;
                r.pop_back();
            }
    }
}