/*
Given a string, determine if it is a palindrome, considering
only alphanumeric characters and ignoring cases. 

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome. 

Note:
 Have you consider that the string might be empty? 
 This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as
valid palindrome.

class Solution {
public:
    bool isPalindrome(string s) {
        
    }
};
*/

#include "Ex125-ValidPalindrome.h"

namespace LeetCodeTestSolutions
{
    bool Ex125::isPalindrome(string s)
    {
        int i = 0, j = s.length()-1;
        while(i < j) 
        {
            if(!isAlphanumeric(s[i])) i++;
            else if(!isAlphanumeric(s[j])) j--;
            else if(s[i++] != s[j--]) return false;
        }
        
        return true;
    }

    bool Ex125::isAlphanumeric(char &c) 
    {
        if(c >= 'A' && c <= 'Z') c += 32;
        else if(c >= '0' && c <= '9' || c >= 'a' && c <= 'z') return true;
        else return false;
        return true;
    }
}