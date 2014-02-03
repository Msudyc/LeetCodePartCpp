#include "CppUnitTest.h"
#include "Ex098-ValidateBinarySearchTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex98Test)
    {
    public:

        TEST_METHOD(Ex098_Test_isValidBST)
        {
            Ex98 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &r; r.right = &rr;
            Assert::IsTrue(ex.isValidBST(&root));
        }

        TEST_METHOD(Ex098_Test_isValidBST1)
        {
            Ex98 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &r; r.left = &rr;
            Assert::IsFalse(ex.isValidBST(&root));
        }

        TEST_METHOD(Ex098_Test_isValidBST2)
        {
            Ex98 ex;
            TreeNode root(1);
            Assert::IsTrue(ex.isValidBST(&root));
        }

        TEST_METHOD(Ex098_Test_isValidBST3)
        {
            Ex98 ex;
            Assert::IsTrue(ex.isValidBST(NULL));
        }
    };
}