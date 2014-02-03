#include "CppUnitTest.h"
#include "Ex103-BinaryTreeZigzagLevelOrderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex103Test)
    {
    public:

        TEST_METHOD(Ex103_Test_zigzagLevelOrder)
        {
            Ex103 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            vector<vector<int>> res = ex.zigzagLevelOrder(&root);
            Assert::AreEqual(3, (int)res.size());
            Assert::AreEqual(1, res[0][0]);
            Assert::AreEqual(3, res[1][0]);
            Assert::AreEqual(2, res[1][1]);
            Assert::AreEqual(4, res[2][0]);
            Assert::AreEqual(5, res[2][1]);
        }
    };
}