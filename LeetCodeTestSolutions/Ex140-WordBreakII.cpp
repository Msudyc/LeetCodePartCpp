/*
Given a string s and a dictionary of words dict, add 
spaces in s to construct a sentence where each word is
a valid dictionary word. 

Return all such possible sentences. 

For example, given
s = "catsanddog",
dict = ["cat", "cats", "and", "sand", "dog"]. 

A solution is ["cats and dog", "cat sand dog"]. 

class Solution {
public:
    vector<string> wordBreak(string s, unordered_set<string> &dict) {
        
    }
};
*/

#include <set>
#include "Ex140-WordBreakII.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex140::wordBreak(string s, unordered_set<string> &dict)
    {
        vector<string> res;
        if(s.size() < 1 || dict.empty()) return res;
        unordered_set<string>::iterator it = dict.begin();
        int maxlen=(*it).length(), minlen=(*it).length();
        for(it++; it != dict.end(); it++)
            if((int)(*it).length() > maxlen)
                maxlen = (*it).length();
            else if((int)(*it).length() < minlen)
                minlen = (*it).length();
        set<string> unmatched;
        vector<string> path;
        wordBreakHelper(s, dict, unmatched, minlen, maxlen, path, res);
        return res;
    }
    
    void Ex140::wordBreakHelper(
        string s, 
        unordered_set<string> &dict, 
        set<string> &unmatched, 
        int mn,
        int mx, 
        vector<string> &path, 
        vector<string> &res)
    {
        int i = mx < (int)s.length() ? mx : (int)s.length();
        for(; i >= mn ; i--)
        {
            string preffixstr = s.substr(0, i);
            if(dict.find(preffixstr) != dict.end())
            {
                path.push_back(preffixstr);
                if(preffixstr.size() == s.size())
                {
                    string tmp = path[0];
                    for(int i = 1; i < (int)path.size(); i++) 
                        tmp+= " "+path[i];
                    res.push_back(tmp);
                }
                string suffixstr = s.substr(i);
                if(unmatched.find(suffixstr) == unmatched.end())
                {
                    int oldsz = res.size();
                    wordBreakHelper(suffixstr, dict, unmatched, mn, mx, path, res);
                    if(res.size() == oldsz)
                        unmatched.insert(suffixstr);
                }
                
                path.pop_back();
            }
        }
    }
}