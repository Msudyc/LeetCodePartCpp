#include "CppUnitTest.h"
#include "Ex101-SymmetricTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex101Test)
    {
    public:

        TEST_METHOD(Ex101_Test_isSymmetric)
        {
            Ex101 ex;
            TreeNode root(1), l(2), ll(3), r(2), rr(3);
            root.left = &l; root.right = &r;
            l.left = &ll; r.right = &rr;
            Assert::IsTrue(ex.isSymmetric(&root));
        }

        TEST_METHOD(Ex101_Test_isSymmetric1)
        {
            Ex101 ex;
            TreeNode root(1), l(2), ll(3), r(2), rr(4);
            root.left = &l; root.right = &r;
            l.left = &ll; r.right = &rr;
            Assert::IsFalse(ex.isSymmetric(&root));
        }

        TEST_METHOD(Ex101_Test_isSymmetric2)
        {
            Ex101 ex;
            TreeNode root(1), l(2), ll(3), r(2), rr(3);
            root.left = &l; root.right = &r;
            l.right = &ll; r.right = &rr;
            Assert::IsFalse(ex.isSymmetric(&root));
        }

        TEST_METHOD(Ex101_Test_isSymmetric3)
        {
            Ex101 ex;
            TreeNode root(1), l(2), ll(3), r(2), rr(3);
            root.left = &l; root.right = &r;
            l.right = &ll; r.left = &rr;
            Assert::IsTrue(ex.isSymmetric(&root));
        }
    };
}