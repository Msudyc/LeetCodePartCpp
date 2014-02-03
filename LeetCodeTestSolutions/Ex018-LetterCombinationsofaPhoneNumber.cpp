/*
Given a digit string, return all possible letter combinations 
that the number could represent. 

A mapping of digit to letters (just like on the telephone buttons) 
is given below.

1-"" 2-abc 3-def 4-ghi 5-jkl 6-mno 7-pqrs 8-tuv 9-wxyz 

Input:Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].


Note:
 Although the above answer is in lexicographical order, your 
 answer could be in any order you want.

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
    }
};
*/

#include "Ex018-LetterCombinationsofaPhoneNumber.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex18::letterCombinations(string digits)
    {
        const string dict[] = {"","","abc","def","ghi","jkl","mno","qprs","tuv","wxyz"};
        vector<string> r;
        r.push_back("");
        for(int i = 0; i < (int)digits.length(); i++) 
        {
            const string s = dict[digits[i]-'0'];
            vector<string> tmp;
            for(int j = 0; j< (int)s.length(); j++)
                for(int k = 0; k < (int)r.size(); k++)
                    tmp.push_back(r[k]+s[j]);
            r = tmp;
        }
        
        return r;
    }
}