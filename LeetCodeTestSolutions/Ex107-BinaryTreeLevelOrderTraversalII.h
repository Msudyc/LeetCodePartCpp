#include <vector>
#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex107
    {
    public:
        vector<vector<int> > levelOrderBottom(TreeNode *root);
        void traverse(TreeNode *root, int level, vector<vector<int>> &result);
    };
}