/*
Given a string s1, we may represent it as a binary tree 
by partitioning it to two non-empty substrings recursively. 

Below is one possible representation of s1 = "great": 

    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
          
To scramble the string, we may choose any non-leaf node 
and swap its two children. 

For example, if we choose the node "gr" and swap its two 
children, it produces a scrambled string "rgeat". 

    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
          
We say that "rgeat" is a scrambled string of "great". 

Similarly, if we continue to swap the children of nodes 
"eat" and "at", it produces a scrambled string "rgtae". 

    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a

We say that "rgtae" is a scrambled string of "great". 

Given two strings s1 and s2 of the same length, determine 
if s2 is a scrambled string of s1. 

class Solution {
public:
    bool isScramble(string s1, string s2) {
        
    }
};
*/

#include <algorithm>
#include <vector>
#include "Ex087-ScrambleString.h"

namespace LeetCodeTestSolutions
{
    bool Ex87::isScramble(string s1, string s2)
    {
        int n = s1.size();
        if (s2.size() != n) return false;
        // 3D array
        vector<vector<vector<bool> > > temp(n, vector<vector<bool> >(n, vector<bool>(n)));

        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                temp[i][j][0] = s1[i] == s2[j];

        for (int l = 1; l < n; l++)
            for (int i = 0; i+l < n; i++)
                for (int j = 0; j+l <n; j++) 
                {
                    temp[i][j][l] = false;
                    for (int k = 0;  k< l; k++) 
                    {
                        if (temp[i][j][k] && temp[i+k+1][j+k+1][l-1-k]
                            || temp[i][j+l-k][k] && temp[i+k+1][j][l-1-k]) 
                            {
                                temp[i][j][l] = true;
                                break;
                            }
                    }
                }

        return temp[0][0][n-1];
    }

    bool Ex87::isScramble1(string s1, string s2)
    {
        if(s1.size() != s2.size()) return false;
        if(s1 == s2) return true;
        string ts1 = s1,ts2 = s2;
        sort(ts1.begin(), ts1.end());
        sort(ts2.begin(), ts2.end());
        if(ts1 != ts2) return false;

        for(int isep = 1; isep < (int)s1.size(); isep++) 
        {
            //seporate s1 as [0,isep - 1],[isep, s1.size() - 1]
            string seg11 = s1.substr(0, isep);
            string seg12 = s1.substr(isep);
            //see if forward order is ok
            string seg21 = s2.substr(0, isep);
            string seg22 = s2.substr(isep);
            if(isScramble1(seg11,seg21) && isScramble1(seg12,seg22)) return true;

            //see if reverse order is ok
            seg21 = s2.substr(s2.size() - isep);
            seg22 = s2.substr(0,s2.size() - isep);
            if(isScramble1(seg11,seg21) && isScramble1(seg12,seg22)) return true;
        }

        return false;
    }
}