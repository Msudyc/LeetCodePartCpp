#include "CppUnitTest.h"
#include "Ex117-PopulatingNextRightPointersinEachNodeII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex117Test)
    {
    public:

        TEST_METHOD(Ex117_Test_connect)
        {
            Ex117 ex;
            TreeLinkNode root(1), l(2), r(3), ll(4), lr(5), rr(7);
            root.left = &l; root.right = &r;
            l.left = &ll; l.right = &lr;
            r.right = &rr;
            ex.connect(&root);
            Assert::AreEqual(3, l.next->val);
            Assert::AreEqual(5, ll.next->val);
            Assert::AreEqual(7, lr.next->val);
        }
    };
}