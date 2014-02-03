#include <vector>
#include "Commons.h"

using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex105
    {
    public:
        TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);
        TreeNode* helper(vector<int> &preorder, int ps, int pe, vector<int> &inorder, int is, int ie);
    };
}