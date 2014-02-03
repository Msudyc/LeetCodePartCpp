#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex124
    {
    public:
        int maxPathSum(TreeNode *root);
        void maxPathSumHelper(TreeNode *node, int &csum, int &maxsum);
    };
}