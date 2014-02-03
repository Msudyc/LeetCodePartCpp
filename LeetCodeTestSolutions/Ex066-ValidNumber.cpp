/*
Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be 
ambiguous. You should gather all requirements up front 
before implementing one. 

class Solution {
public:
    bool isNumber(const char *s) {
        
    }
};
*/

#include "Ex066-ValidNumber.h"

namespace LeetCodeTestSolutions
{
    bool Ex66::isNumber(const char *s)
    {
        int mat[11][7] = {0 ,0 ,0 ,0 ,0 ,0 ,0, // false
                          0 ,2 ,3 ,0 ,1 ,4 ,0, // 1
                          0 ,2 ,5 ,6 ,9 ,0 ,10,// 2
                          0 ,5 ,0 ,0 ,0 ,0 ,0, // 3
                          0 ,2 ,3 ,0 ,0 ,0 ,0, // 4
                          0 ,5 ,0 ,6 ,9 ,0 ,10,// 5
                          0 ,7 ,0 ,0 ,0 ,8 ,0, // 6
                          0 ,7 ,0 ,0 ,9 ,0 ,10,// 7
                          0 ,7 ,0 ,0 ,0 ,0 ,0, // 8
                          0 ,0 ,0 ,0 ,9 ,0 ,10,// 9
                          10,10,10,10,10,10,10 // 10
                        };
        int i = 0, stat = 1;
        while(s[i] != '\0') 
        {
            int type = 0;
            if(s[i] >= '0' && s[i] <= '9') type = 1; 
            else if(s[i] == '.') type = 2; 
            else if(s[i] == 'e') type = 3; 
            else if(s[i] == ' ') type = 4;
            else if(s[i] == '+' || s[i] == '-') type = 5;            
            stat = mat[stat][type];
            if(stat == 0) return false;
            i++;
        }
        
        stat = mat[stat][6];
        if(stat == 10) return true;
        else return false;
    }
}