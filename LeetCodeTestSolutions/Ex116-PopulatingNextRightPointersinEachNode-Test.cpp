#include "CppUnitTest.h"
#include "Ex116-PopulatingNextRightPointersinEachNode.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex116Test)
    {
    public:

        TEST_METHOD(Ex116_Test_connect)
        {
            Ex116 ex;
            TreeLinkNode root(1), l(2), r(3), ll(4), lr(5), rl(6), rr(7);
            root.left = &l; root.right = &r;
            l.left = &ll; l.right = &lr;
            r.left = &rl; r.right = &rr;
            ex.connect(&root);
            Assert::AreEqual(3, l.next->val);
            Assert::AreEqual(5, ll.next->val);
            Assert::AreEqual(6, lr.next->val);
            Assert::AreEqual(7, rl.next->val);
        }

        TEST_METHOD(Ex116_Test_connect1)
        {
            Ex116 ex;
            TreeLinkNode root(1), l(2);
            root.left = &l;
            ex.connect(&root);
            Assert::IsNull(l.next);
        }
    };
}