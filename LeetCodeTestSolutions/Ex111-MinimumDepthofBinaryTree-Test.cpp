#include "CppUnitTest.h"
#include "Ex111-MinimumDepthofBinaryTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex111Test)
    {
    public:

        TEST_METHOD(Ex111_Test_minDepth)
        {
            Ex111 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::AreEqual(2, ex.minDepth(&root));
        }

        TEST_METHOD(Ex111_Test_minDepth1)
        {
            Ex111 ex;
            TreeNode root(1);
            Assert::AreEqual(1, ex.minDepth(&root));
        }
    };
}