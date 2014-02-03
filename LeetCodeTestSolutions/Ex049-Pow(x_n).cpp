/*
Implement pow(x, n). 

class Solution {
public:
    double pow(double x, int n) {
        
    }
};
*/

#include "Ex049-Pow(x_n).h"

namespace LeetCodeTestSolutions
{
    double Ex49::pow(double x, int n)
    {
        if (n == 0) return 1.0;
        double half = pow(x, n / 2);
        if (n % 2 == 0) return half * half;
        else if (n > 0) return half * half * x;
        else return half * half / x;
    }
}