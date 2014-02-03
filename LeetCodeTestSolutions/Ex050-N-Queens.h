#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex50
    {
    public:
        vector<vector<string> > solveNQueens(int n);
        void dfs(vector<vector<string> >&ret, vector<int>& result, int cur);
        bool isValid(vector<int>& result, int cur, int val);
    };
}