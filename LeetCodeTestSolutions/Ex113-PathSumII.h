#include <vector>
#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex113
    {
    public:
        vector<vector<int> > pathSum(TreeNode *root, int sum);
        void pathSumRecursive(TreeNode *root, int sum, vector<vector<int> > &paths, vector<int> &curPath) ;
    };
}