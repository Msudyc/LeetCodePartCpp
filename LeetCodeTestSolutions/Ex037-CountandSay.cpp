/*
The count-and-say sequence is the sequence of integers 
beginning as follows:

1, 11, 21, 1211, 111221, ... 

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence. 

Note: The sequence of integers will be represented as 
a string. 

class Solution {
public:
    string countAndSay(int n) {
        
    }
};
*/

#include "Ex037-CountandSay.h"

namespace LeetCodeTestSolutions
{
    string Ex37::countAndSay(int n)
    {
        if (n==1) return "1";
        string pre = "1";
        string str;
        for (int i=1; i<n;i++){
            str = cas(pre);
            pre = str;
        }

        return str;
    }

    string Ex37::cas(string str)
    {
        string r;
        char ch=str[0];
        int chn=1;
        for(unsigned int i = 1; i <= str.size(); i++)
            if (str[i] == ch) chn++;
            else 
            {
                char chr = chn + '0';
                r = r + chr;
                r = r + ch;
                ch = str[i];
                chn = 1;
            }

        return r;
    }
}