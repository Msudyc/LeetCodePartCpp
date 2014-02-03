/*
Implement int sqrt(int x). Compute and return the 
square root of x.

class Solution {
public:
    int sqrt(int x) {
        
    }
};
*/

#include <cmath>
#include "Ex069-Sqrt(x).h"

namespace LeetCodeTestSolutions
{
    int Ex69::sqrt(int x)
    {
        if (x == 0) return 0;
        if (x == 1) return 1;
       
        double x0 = 1;
        double x1;
        while (true)
        {
            x1 = (x0 + x/x0) / 2.0;
            if (abs(x1 - x0) < 1.0) return (int)x1;
            x0 = x1;
        }
    }
}