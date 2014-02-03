/*
Given a string containing only digits, restore it by 
returning all possible valid IP address combinations.

For example:
 Given "25525511135", 

return ["255.255.11.135", "255.255.111.35"]. 
(Order does not matter) 

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        
    }
};
*/

#include "Ex093-RestoreIPAddresses.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex93::restoreIpAddresses(string s)
    {
        vector<string> res;
        getRes(s, "", res, 4);
        return res;
    }

    void Ex93::getRes(string s, string r, vector<string> &res, int k)
    {
        if (k == 0)
        {
            if (s.empty()) res.push_back(r);
            return;
        }
        else
            for (int i = 1; i <= 3; i++)
                if ((int)s.size() >= i && valid(s.substr(0, i)))
                {
                    if (k == 1) getRes(s.substr(i), r + s.substr(0, i), res, k-1);
                    else getRes(s.substr(i), r + s.substr(0,i) + ".", res, k-1);
                }
    }

    bool Ex93::valid(string s)
    {
        if (s.size() == 3 && (atoi(s.c_str()) > 255 || atoi(s.c_str()) == 0)) return false;
        if (s.size() == 3 && s[0] == '0') return false;
        if (s.size() == 2 && atoi(s.c_str()) == 0) return false;
        if (s.size() == 2 && s[0] == '0') return false;
        return true;
    }
}