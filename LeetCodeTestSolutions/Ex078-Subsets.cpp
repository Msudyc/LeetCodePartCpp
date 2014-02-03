/*
Given a set of distinct integers, S, return all possible
subsets. 

Note:
.Elements in a subset must be in non-descending order.
.The solution set must not contain duplicate subsets.

For example,
 If S = [1,2,3], a solution is: 
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        
    }
};
*/

#include <algorithm>
#include "Ex078-Subsets.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int> > Ex78::subsets(vector<int> &S)
    {
        sort(S.begin(), S.end());
        vector<vector<int> > v(1);
        for(int i = 0; i < (int)S.size(); i++) 
        {
            int j = v.size();
            while(j-- > 0) 
            {
                v.push_back(v[j]);
                v.back().push_back(S[i]);
            }
        }
        
        return v;
    }
}