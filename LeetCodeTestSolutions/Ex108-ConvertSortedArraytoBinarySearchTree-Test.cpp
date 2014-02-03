#include "CppUnitTest.h"
#include "Ex108-ConvertSortedArraytoBinarySearchTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex108Test)
    {
    public:

        TEST_METHOD(Ex108_Test_sortedArrayToBST)
        {
            Ex108 ex;
            int row0[] = {1, 2, 3};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            TreeNode *r = ex.sortedArrayToBST(r0);
            Assert::AreEqual(2, r->val);
            Assert::AreEqual(1, r->left->val);
            Assert::AreEqual(3, r->right->val);
        }
    };
}