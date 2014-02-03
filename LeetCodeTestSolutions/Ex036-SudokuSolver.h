#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex36
    {
    public:
        void solveSudoku(vector<vector<char> > &board);
        bool solveSudokudfs(vector<vector<char> > &board);
        bool isValid(vector<vector<char> > &board, int a, int b);
    };
}