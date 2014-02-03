/*
Given a string s consists of upper/lower-case alphabets and 
empty space characters ' ', return the length of last word 
in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of 
non-space characters only.

For example, 
 Given s = "Hello World",
 return 5. 

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        
    }
};
*/

#include "Ex057-LengthofLastWord.h"

namespace LeetCodeTestSolutions
{
    int Ex57::lengthOfLastWord(const char *s)
    {
        int l = 0;
        while(*s) 
        {
            if(*(s++) != ' ') l++;
            // s already move to next char
            else if(*s && *s != ' ') l = 0; 
        }
        
        return l;
    }
}