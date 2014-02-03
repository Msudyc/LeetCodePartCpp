#include "CppUnitTest.h"
#include "Ex094-BinaryTreeInorderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex94Test)
    {
    public:

        TEST_METHOD(Ex094_Test_inorderTraversal)
        {
            Ex94 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &r; r.left = &rr;
            vector<int> res = ex.inorderTraversal(&root);
            Assert::AreEqual(1, res[0]);
            Assert::AreEqual(3, res[1]);
            Assert::AreEqual(2, res[2]);
        }

        TEST_METHOD(Ex094_Test_inorderTraversal1)
        {
            Ex94 ex;
            TreeNode root(1);
            vector<int> res = ex.inorderTraversal(&root);
            Assert::AreEqual(1, res[0]);
        }

        TEST_METHOD(Ex094_Test_inorderTraversal2)
        {
            Ex94 ex;
            TreeNode root(1), l(2), r(3), rr(4);
            root.left = &l; root.right = &r; r.right = &rr;
            vector<int> res = ex.inorderTraversal(&root);
            Assert::AreEqual(2, res[0]);
            Assert::AreEqual(1, res[1]);
            Assert::AreEqual(3, res[2]);
            Assert::AreEqual(4, res[3]);
        }

        TEST_METHOD(Ex094_Test_inorderTraversal3)
        {
            Ex94 ex;
            TreeNode root(1), r(2);
            root.right = &r;
            vector<int> res = ex.inorderTraversal(&root);
            Assert::AreEqual(1, res[0]);
            Assert::AreEqual(2, res[1]);
        }
    };
}