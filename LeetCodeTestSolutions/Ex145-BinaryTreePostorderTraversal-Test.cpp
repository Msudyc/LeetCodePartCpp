#include "CppUnitTest.h"
#include "Ex145-BinaryTreePostorderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex145Test)
    {
    public:

        TEST_METHOD(Ex145_Test_postorderTraversal)
        {
            Ex145 ex;
            TreeNode root(1), l(2), ll(3), r(4), rr(5);
            root.left = &l; root.right = &r;
            l.left = &ll; r.right = &rr;
            vector<int> res = ex.postorderTraversal(&root);
            Assert::AreEqual(3, res[0]);
            Assert::AreEqual(2, res[1]);
            Assert::AreEqual(5, res[2]);
            Assert::AreEqual(4, res[3]);
            Assert::AreEqual(1, res[4]);
        }

        TEST_METHOD(Ex145_Test_postorderTraversal1)
        {
            Ex145 ex;
            TreeNode root(1), l(2), r(4), rr(5);
            root.left = &l; root.right = &r; r.right = &rr;
            vector<int> res = ex.postorderTraversal(&root);
            Assert::AreEqual(2, res[0]);
            Assert::AreEqual(5, res[1]);
            Assert::AreEqual(4, res[2]);
            Assert::AreEqual(1, res[3]);
        }
    };
}