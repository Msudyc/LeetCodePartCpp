#include "CppUnitTest.h"
#include "Ex124-BinaryTreeMaximumPathSum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex124Test)
    {
    public:

        TEST_METHOD(Ex124_Test_maxPathSum)
        {
            Ex124 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::AreEqual(12, ex.maxPathSum(&root));
        }

        TEST_METHOD(Ex124_Test_maxPathSum1)
        {
            Ex124 ex;
            TreeNode root(1), l(2), r(3);
            root.left = &l; root.right = &r;
            Assert::AreEqual(6, ex.maxPathSum(&root));
        }

        TEST_METHOD(Ex124_Test_maxPathSum2)
        {
            Ex124 ex;
            TreeNode root(1);
            Assert::AreEqual(1, ex.maxPathSum(&root));
        }
    };
}