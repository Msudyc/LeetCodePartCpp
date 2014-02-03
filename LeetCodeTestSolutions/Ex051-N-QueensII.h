using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex51
    {
    public:
        int totalNQueens(int n);
        void nqueens(int A[], int cur, int n, int &res);
        bool isValid(int A[], int r);
    };
}