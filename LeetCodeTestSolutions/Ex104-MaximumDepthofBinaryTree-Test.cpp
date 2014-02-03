#include "CppUnitTest.h"
#include "Ex104-MaximumDepthofBinaryTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex104Test)
    {
    public:

        TEST_METHOD(Ex104_Test_maxDepth)
        {
            Ex104 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5), rrr(6);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr; rr.right = &rrr;
            Assert::AreEqual(4, ex.maxDepth(&root));
        }

        TEST_METHOD(Ex104_Test_maxDepth1)
        {
            Ex104 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::AreEqual(3, ex.maxDepth(&root));
        }

        TEST_METHOD(Ex104_Test_maxDepth2)
        {
            Ex104 ex;
            TreeNode root(1);
            Assert::AreEqual(1, ex.maxDepth(&root));
        }
    };
}