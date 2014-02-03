#include "CppUnitTest.h"
#include "Ex142-LinkedListCycleII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex142Test)
    {
    public:

        TEST_METHOD(Ex142_Test_detectCycle)
        {
            Ex142 ex;
            ListNode l0(0), l1(1), l2(2), l3(3), l4(4);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; 
            l3.next = &l4; l4.next = &l1;
            ListNode *r = ex.detectCycle(&l0);
            Assert::AreEqual(1, r->val);
        }

        TEST_METHOD(Ex142_Test_detectCycle1)
        {
            Ex142 ex;
            ListNode l0(0), l1(1), l2(2), l3(3), l4(4);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; 
            l3.next = &l4;
            ListNode *r = ex.detectCycle(&l0);
            Assert::IsNull(r);
        }
    };
}