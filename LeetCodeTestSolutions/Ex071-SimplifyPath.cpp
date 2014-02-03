/*
Given an absolute path for a file (Unix-style), simplify it.

For example,
path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"

Corner Cases: 

.Did you consider the case where path = "/../"? In this 
 case, you should return "/".
.Another corner case is the path might contain multiple 
 slashes '/' together, such as "/home//foo/".
 In this case, you should ignore redundant slashes and 
 return "/home/foo".

class Solution {
public:
    string simplifyPath(string path) {
        
    }
};
*/

#include <vector>
#include "Ex071-SimplifyPath.h"

namespace LeetCodeTestSolutions
{
    string Ex71::simplifyPath(string path)
    {
        if(path.back() != '/') path.push_back('/');
        vector<string> pv;
        string temp;
        for(int i = 0; i < (int)path.length(); i++)
        {
            if(path[i] == '/')
            {
                if(temp == "..") { if(!pv.empty()) pv.pop_back(); }
                else if (temp != "." && !temp.empty()) pv.push_back(temp);
                temp.clear();
            }
            else temp.push_back(path[i]);
        }

        string ret;
        for(int i = 0; i < (int) pv.size(); i++)
        {
            ret.push_back('/');
            ret.append(pv[i]);
        }

        if(ret.empty()) return "/";
        return ret;
    }
}