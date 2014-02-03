#include "CppUnitTest.h"
#include "Ex129-SumRoottoLeafNumbers.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex129Test)
    {
    public:

        TEST_METHOD(Ex129_Test_sumNumbers)
        {
            Ex129 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            Assert::AreEqual(281, ex.sumNumbers(&root));
        }

        TEST_METHOD(Ex129_Test_sumNumbers1)
        {
            Ex129 ex;
            TreeNode root(1), l(2), r(3);
            root.left = &l; root.right = &r;
            Assert::AreEqual(25, ex.sumNumbers(&root));
        }

        TEST_METHOD(Ex129_Test_sumNumbers2)
        {
            Ex129 ex;
            TreeNode root(1);
            Assert::AreEqual(1, ex.sumNumbers(&root));
        }
    };
}