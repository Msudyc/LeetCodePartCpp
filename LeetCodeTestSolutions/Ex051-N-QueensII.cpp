/*
Follow up for N-Queens problem.

Now, instead outputting board configurations, return 
the total number of distinct solutions.

class Solution {
public:
    int totalNQueens(int n) {
        
    }
};
*/

#include <cstdlib>
#include "Ex051-N-QueensII.h"

namespace LeetCodeTestSolutions
{
    int Ex51::totalNQueens(int n)
    {
        int res=0;
        int *A = new int[n];
        nqueens(A, 0, n, res);
        delete A;
        return res;
    }

    void Ex51::nqueens(int A[], int cur, int n, int &res)
    {
        if (cur == n) { res++; return; }
        else
            for (int i = 0; i < n; i++)
            {
                A[cur] = i;
                if (isValid(A, cur)) nqueens(A, cur+1, n, res);
            }
    }

    bool Ex51::isValid(int A[], int r)
    {
        for (int i = 0;i < r; i++)
            if ((A[i] == A[r]) || (abs(A[i] - A[r]) == (r-i)))
                return false; 
        return true;
    }
}