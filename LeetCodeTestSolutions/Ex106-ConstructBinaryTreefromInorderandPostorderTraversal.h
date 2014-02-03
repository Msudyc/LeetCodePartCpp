#include <vector>
#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex106
    {
    public:
        typedef vector<int>::iterator iter;
        TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder);
        TreeNode *build(iter in_beg, iter in_end, iter post_beg, iter post_end);
    };
}