#include "CppUnitTest.h"
#include "Ex114-FlattenBinaryTreetoLinkedList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex114Test)
    {
    public:

        TEST_METHOD(Ex114_Test_flatten)
        {
            Ex114 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            TreeNode *res = &root;
            ex.flatten(res);
            Assert::AreEqual(1, res->val);
            Assert::AreEqual(2, res->right->val);
            Assert::AreEqual(3, res->right->right->val);
            Assert::AreEqual(4, res->right->right->right->val);
            Assert::AreEqual(5, res->right->right->right->right->val);
        }

        TEST_METHOD(Ex114_Test_flatten1)
        {
            Ex114 ex;
            TreeNode root(1);
            TreeNode *res = &root;
            ex.flatten(res);
            Assert::AreEqual(1, res->val);
            Assert::IsNull(res->right);
        }
    };
}