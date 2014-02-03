/*
Given a collection of numbers that might contain duplicates, 
return all possible unique permutations. 

For example,
[1,1,2] have the following unique permutations:
[1,1,2], [1,2,1], and [2,1,1]. 

class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        
    }
};
*/

#include "Ex046-PermutationsII.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex46::permuteUnique(vector<int> &num)
    {
        vector<vector<int> > res;
        perm(num, 0, (num.size()-1), res);
        return res;
    }

    void Ex46::perm(vector<int> num, int k, int n, vector<vector<int> > &res)
    {
        if (k == n) res.push_back(num);
        else
            for (int i = k; i <= n; i++)
            {
                if (noswap(k,i,num)) continue;

                int tmp = num[k];
                num[k] = num[i];
                num[i] = tmp;
                 
                perm(num, k+1, n, res);
                 
                tmp = num[k];
                num[k] = num[i];
                num[i] = tmp;
            }
    }

    bool Ex46::noswap(int k, int i, const vector<int> num)
    {
        // if swap before, no need to swap again
        for (int j=k;j<i;j++)
            if (num[j]==num[i]) return true;
        return false;
    }
}