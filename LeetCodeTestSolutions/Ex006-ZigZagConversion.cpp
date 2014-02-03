/*
The string "PAYPALISHIRING" is written in a zigzag pattern on 
a given number of rows like this: (you may want to display this
pattern in a fixed font for better legibility) 

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion
given a number of rows: string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR". 

class Solution {
public:
    string convert(string s, int nRows) {
        
    }
};
*/

#include "Ex006-ZigZagConversion.h"

namespace LeetCodeTestSolutions
{
    string Ex6::convert(string s, int nRows)
    {
        if(nRows <= 1) return s;
        string r;
        int zigSize = 2 * nRows -2;
        for(int i =0; i < nRows; i++)
        {
            unsigned int base = i;            
            while(base < s.size())
            {
                r.append(1, s[base]);
                if(i > 0 && i < nRows -1)
                {
                    int off = zigSize - 2 * i;
                    if(base + off < s.size()) r.append(1, s[base + off]);
                }

                base = base + zigSize;
            }
        }

        return r;
    }
}