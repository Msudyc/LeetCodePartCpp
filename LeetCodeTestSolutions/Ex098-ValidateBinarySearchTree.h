#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex98
    {
    public:
        bool isValidBST(TreeNode *root);
        bool dfs(TreeNode *root, TreeNode *pre, TreeNode *next);
    };
}