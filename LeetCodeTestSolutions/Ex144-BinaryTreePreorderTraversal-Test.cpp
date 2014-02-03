#include "CppUnitTest.h"
#include "Ex144-BinaryTreePreorderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex144Test)
    {
    public:

        TEST_METHOD(Ex144_Test_preorderTraversal)
        {
            Ex144 ex;
            TreeNode root(1), l(2), ll(3), r(4), rr(5);
            root.left = &l; root.right = &r;
            l.left = &ll; r.right = &rr;
            vector<int> res = ex.preorderTraversal(&root);
            Assert::AreEqual(1, res[0]);
            Assert::AreEqual(2, res[1]);
            Assert::AreEqual(3, res[2]);
            Assert::AreEqual(4, res[3]);
            Assert::AreEqual(5, res[4]);
        }

        TEST_METHOD(Ex144_Test_preorderTraversal1)
        {
            Ex144 ex;
            TreeNode root(1), l(2), r(4), rr(5);
            root.left = &l; root.right = &r;
            r.right = &rr;
            vector<int> res = ex.preorderTraversal(&root);
            Assert::AreEqual(1, res[0]);
            Assert::AreEqual(2, res[1]);
            Assert::AreEqual(4, res[2]);
            Assert::AreEqual(5, res[3]);
        }
    };
}