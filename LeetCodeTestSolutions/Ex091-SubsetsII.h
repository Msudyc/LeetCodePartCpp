#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex91
    {
    public:
        vector<vector<int> > subsetsWithDup(vector<int> &S);
        vector<vector<int> > subsetsWithDup1(vector<int> &S);
        void sub(vector<int> &s, int begin, vector<int> &path, vector<vector<int> > &result);
    };
}