#include "CppUnitTest.h"
#include "Ex102-BinaryTreeLevelOrderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex102Test)
    {
    public:

        TEST_METHOD(Ex102_Test_levelOrder)
        {
            Ex102 ex;
            TreeNode root(1), l(2), ll(3), r(4), rr(5);
            root.left = &l; root.right = &r;
            l.left = &ll; r.right = &rr;
            vector<vector<int>> res = ex.levelOrder(&root);
            Assert::AreEqual(3, (int)res.size());
            Assert::AreEqual(1, res[0][0]);
            Assert::AreEqual(2, res[1][0]);
            Assert::AreEqual(4, res[1][1]);
            Assert::AreEqual(3, res[2][0]);
            Assert::AreEqual(5, res[2][1]);
        }

        TEST_METHOD(Ex102_Test_levelOrder1)
        {
            Ex102 ex;
            TreeNode root(1);
            vector<vector<int>> res = ex.levelOrder(&root);
            Assert::AreEqual(1, (int)res.size());
            Assert::AreEqual(1, res[0][0]);
        }
    };
}