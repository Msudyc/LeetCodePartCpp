/*
Given two numbers represented as strings, return 
multiplication of the numbers as a string.

Note: The numbers can be arbitrarily large and are
non-negative.

class Solution {
public:
    string multiply(string num1, string num2) {
        
    }
};
*/

#include "Ex042-MultiplyStrings.h"

namespace LeetCodeTestSolutions
{
    string Ex42::multiply(string num1, string num2)
    {
        if(num1.size() ==0 || num2.size() ==0) return 0;
        string res(num1.size() + num2.size() + 1, '0');
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i = 0; i < (int)num1.size(); i++)
        {
            int dig1 = num1[i] - '0';
            int carry = 0;
            for(unsigned int j = 0; j < num2.size(); j++) 
            {
                int dig2 = num2[j] - '0';
                int exist = res[i+j] - '0';
                res[i+j] = (dig1*dig2 + carry + exist) % 10 + '0'; 
                carry = (dig1*dig2 + carry + exist)/10;
            }
            
            if(carry > 0) res[i + num2.size()] = carry + '0'; 
        }
        
        reverse(res.begin(), res.end()); 
        unsigned int start =0;
        while(res[start] == '0' && start < res.size()) start++;
        if(start == res.size()) return "0"; 
        return res.substr(start, res.size() - start);
    }
}