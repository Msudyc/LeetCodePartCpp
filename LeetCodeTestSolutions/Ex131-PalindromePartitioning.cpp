/*
Given a string s, partition s such that every substring
of the partition is a palindrome. Return all possible 
palindrome partitioning of s. 

For example, given s = "aab", Return 

  [
    ["aa","b"],
    ["a","a","b"]
  ]

class Solution {
public:
    vector<vector<string>> partition(string s) {
        
    }
};
*/

#include "Ex131-PalindromePartitioning.h"

namespace LeetCodeTestSolutions
{
    vector<vector<string>> Ex131::partition(string s)
    {
        vector<vector<string> > res;
        vector<string> r;
        find(s, 0, r, res);
        return res;
    }
    
    void Ex131::find(string s, int st, vector<string> &r, vector<vector<string> > &res)
    {
        if (st >= (int)s.size()) res.push_back(r);
        else
            for (int i = st; i < (int)s.size(); i++)
                if (valid(s, st, i))
                {
                    r.push_back(s.substr(st, i - st + 1));
                    find(s, i+1, r, res);
                    r.pop_back();
                }
    }
    
    bool Ex131::valid(string &str, int st, int ed)
    {
        while(st < ed)
        {
            if(str[ed] != str[st]) return false;
            else { st++; ed--; }
        }

        return true;
    }
}