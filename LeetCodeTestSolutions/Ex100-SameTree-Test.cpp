#include "CppUnitTest.h"
#include "Ex100-SameTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex100Test)
    {
    public:

        TEST_METHOD(Ex100_Test_isSameTree)
        {
            Ex100 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &r; r.right = &rr;
            TreeNode root1(1), r1(2), rr1(3);
            root1.right = &r1; r1.right = &rr1;
            Assert::IsTrue(ex.isSameTree(&root, &root1));
        }

        TEST_METHOD(Ex100_Test_isSameTree1)
        {
            Ex100 ex;
            TreeNode root(1), r(2), rr(3);
            root.right = &r; r.right = &rr;
            TreeNode root1(1), r1(2);
            root1.right = &r1;
            Assert::IsFalse(ex.isSameTree(&root, &root1));
        }

        TEST_METHOD(Ex100_Test_isSameTree2)
        {
            Ex100 ex;
            TreeNode root(4), r(2), rr(3);
            root.right = &r; r.right = &rr;
            TreeNode root1(1), r1(2), rr1(3);
            root1.right = &r1; r1.right = &rr1;
            Assert::IsFalse(ex.isSameTree(&root, &root1));
        }

        TEST_METHOD(Ex100_Test_isSameTree3)
        {
            Ex100 ex;
            TreeNode root(1), l(2), r(3);
            root.left = &l; root.right = &r;
            TreeNode root1(1), l1(2), r1(3);
            root1.left = &l1; root1.right = &r1;
            Assert::IsTrue(ex.isSameTree(&root, &root1));
        }
    };
}