#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex130
    {
    public:
        void solve(vector<vector<char>> &board);
        void mark(vector<vector<char> > &board, int row, int col);
        void flip(vector<vector<char> > &board, char from, char to);
    };
}