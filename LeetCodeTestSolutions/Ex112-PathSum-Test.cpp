#include "CppUnitTest.h"
#include "Ex112-PathSum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex112Test)
    {
    public:

        TEST_METHOD(Ex112_Test_hasPathSum)
        {
            Ex112 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::IsTrue(ex.hasPathSum(&root, 8));
        }

        TEST_METHOD(Ex112_Test_hasPathSum1)
        {
            Ex112 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::IsFalse(ex.hasPathSum(&root, 10));
        }

        TEST_METHOD(Ex112_Test_hasPathSum2)
        {
            Ex112 ex;
            TreeNode root(1);
            Assert::IsTrue(ex.hasPathSum(&root, 1));
        }

        TEST_METHOD(Ex112_Test_hasPathSum3)
        {
            Ex112 ex;
            TreeNode root(1);
            Assert::IsFalse(ex.hasPathSum(&root, 2));
        }
    };
}