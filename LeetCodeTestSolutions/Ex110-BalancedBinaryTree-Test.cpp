#include "CppUnitTest.h"
#include "Ex110-BalancedBinaryTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex110Test)
    {
    public:

        TEST_METHOD(Ex110_Test_isBalanced)
        {
            Ex110 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::IsTrue(ex.isBalanced(&root));
        }

        TEST_METHOD(Ex110_Test_isBalanced1)
        {
            Ex110 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5), rrr(6);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr; rr.right = &rrr;
            Assert::IsFalse(ex.isBalanced(&root));
        }
    };
}