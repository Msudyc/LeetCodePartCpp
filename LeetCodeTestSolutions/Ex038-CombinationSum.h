#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex38
    {
    public:
        vector<vector<int> > combinationSum(vector<int> &candidates, int target);
        void dfs(vector<int> &candidates, int target, vector<vector<int> > &res, vector<int> &r, int i);
    };
}