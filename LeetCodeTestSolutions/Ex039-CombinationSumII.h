#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex39
    {
    public:
        vector<vector<int> > combinationSum2(vector<int> &num, int target);
        void dfs(vector<int> &num, int target, vector<vector<int> > &res, vector<int> &r,int st);
    };
}