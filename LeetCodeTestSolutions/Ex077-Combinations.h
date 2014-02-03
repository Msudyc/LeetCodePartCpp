#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex77
    {
    public:
        vector<vector<int> > combine(int n, int k);
        vector<vector<int> > combine1(int n, int k);
        void dfs(vector<vector<int> >& result, vector<int>& combination, int next, int n, int k);
    };
}