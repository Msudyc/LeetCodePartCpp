#include "CppUnitTest.h"
#include "Ex107-BinaryTreeLevelOrderTraversalII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex107Test)
    {
    public:

        TEST_METHOD(Ex107_Test_levelOrderBottom)
        {
            Ex107 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            vector<vector<int>> res = ex.levelOrderBottom(&root);
            Assert::AreEqual(3, (int)res.size());
            Assert::AreEqual(4, res[0][0]);
            Assert::AreEqual(5, res[0][1]);
            Assert::AreEqual(2, res[1][0]);
            Assert::AreEqual(3, res[1][1]);
            Assert::AreEqual(1, res[2][0]);
        }

        TEST_METHOD(Ex107_Test_levelOrderBottom1)
        {
            Ex107 ex;
            TreeNode root(1);
            vector<vector<int>> res = ex.levelOrderBottom(&root);
            Assert::AreEqual(1, (int)res.size());
            Assert::AreEqual(1, res[0][0]);
        }
    };
}