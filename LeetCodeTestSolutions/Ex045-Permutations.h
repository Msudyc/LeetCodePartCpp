#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex45
    {
    public:
        vector<vector<int> > permute(vector<int> &num);
        void perm(vector<int> num,int k,int n, vector<vector<int> > &res);
    };
}