#include "CppUnitTest.h"
#include "Ex099-RecoverBinarySearchTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex99Test)
    {
    public:

        TEST_METHOD(Ex099_Test_recoverTree)
        {
            Ex99 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &rr; rr.right = &r;
            TreeNode *t = &root;
            ex.recoverTree(t);
            Assert::AreEqual(2, t->right->val);
            Assert::AreEqual(3, t->right->right->val);
        }

        TEST_METHOD(Ex099_Test_recoverTree1)
        {
            Ex99 ex;
            TreeNode root(2), r(1), rr(3);
            root.right = &r; r.right = &rr;
            TreeNode *t = &root;
            ex.recoverTree(t);
            Assert::AreEqual(1, t->val);
            Assert::AreEqual(2, t->right->val);
            Assert::AreEqual(3, t->right->right->val);
        }

        TEST_METHOD(Ex099_Test_recoverTree2)
        {
            Ex99 ex;
            TreeNode root(1), l(2), r(3);
            root.left = &l; root.right = &r;
            TreeNode *t = &root;
            ex.recoverTree(t);
            Assert::AreEqual(2, t->val);
            Assert::AreEqual(1, t->left->val);
            Assert::AreEqual(3, t->right->val);
        }

        TEST_METHOD(Ex099_Test_recoverTree3)
        {
            Ex99 ex;
            TreeNode root(3), l(1), r(2);
            root.left = &l; root.right = &r;
            TreeNode *t = &root;
            ex.recoverTree(t);
            Assert::AreEqual(2, t->val);
            Assert::AreEqual(1, t->left->val);
            Assert::AreEqual(3, t->right->val);
        }
    };
}