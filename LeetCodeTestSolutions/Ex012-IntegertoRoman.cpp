/*
Given an integer, convert it to a roman numeral. 
Input is guaranteed to be within the range from 
1 to 3999.

class Solution {
public:
    string intToRoman(int num) {
        
    }
};

I-1, V-5, X-10, L-50, C-100, D-500, M-1000
*/

#include "Ex012-IntegertoRoman.h"

namespace LeetCodeTestSolutions
{
    string Ex12::intToRoman(int num)
    {
        string result = "";
        result += digitSymbol(num/1000%10, 0, 0, 'M');
        result += digitSymbol(num/100%10, 'M', 'D', 'C');
        result += digitSymbol(num/10%10, 'C', 'L', 'X'); 
        result += digitSymbol(num%10, 'X', 'V', 'I');
        return result;
    }

    string Ex12::digitSymbol(int num, char ten, char five, char one)
    {
        string r;
        if (num == 9) r = r.append(1, one).append(1, ten);
        else if (num >= 5) r = r.append(1, five) + string(num % 5, one);
        else if (num == 4) r = r.append(1, one).append(1, five);
        else r += string(num, one);
        return r;
    }
}