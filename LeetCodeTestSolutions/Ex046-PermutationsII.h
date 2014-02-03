#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex46
    {
    public:
        vector<vector<int> > permuteUnique(vector<int> &num);
        void perm(vector<int> num, int k, int n, vector<vector<int> > &res);
        bool noswap(int k, int i, const vector<int> num);
    };
}