/*
Given an array S of n integers, are there elements a, b, c 
in S such that a + b + c = 0 ? Find all unique triplets in 
the array which gives the sum of zero.

Note:

.Elements in a triplet (a,b,c) must be in non-descending 
 order. (ie, a ≤ b ≤ c)
.The solution set must not contain duplicate triplets.

    For example, given array S = {-1 0 1 2 -1 -4},

    A solution set is:
    (-1, 0, 1)
    (-1, -1, 2)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &num) {
        
    }
};
*/

#include <algorithm>
#include "Ex015-3Sum.h"

namespace LeetCodeTestSolutions
{
    vector<vector<int>> Ex15::threeSum(vector<int> &num)
    {
        vector<vector<int>> result;
        vector<int> a; 
        sort(num.begin(), num.end());
        int l, r, sum;
        for(int i = 0, n = num.size(); i < n-2; i++)
        {
            if(i > 0 && num[i] == num[i-1]) continue; // skip same case 0,0,0,0
            l = i+1, r = n-1;
            while(l < r)
            {
                sum = num[i] + num[l] + num[r];
                if(sum == 0) 
                {                        
                    a.push_back(num[i]);
                    a.push_back(num[l]);
                    a.push_back(num[r]);
                    result.push_back(a);
                    a.clear();
                    l++; r--;
                    while(l < r && num[l] == num[l-1]) l++; // skip same
                    while(l < r && num[r] == num[r+1]) r--; // skip same
                }
                else if(sum > 0) 
                { 
                    r--;
                    while(l < r && num[r] == num[r+1]) r--; // skip same
                }
                else
                {
                    l++;
                    while(l < r && num[l] == num[l-1]) l++; // skip same
                }
            }
        }

        return result;
    }
}