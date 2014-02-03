#include "CppUnitTest.h"
#include "Ex141-LinkedListCycle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex141Test)
    {
    public:

        TEST_METHOD(Ex141_Test_hasCycle)
        {
            Ex141 ex;
            ListNode l0(0), l1(1), l2(2), l3(3), l4(4);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; 
            l3.next = &l4; l4.next = &l1;
            Assert::IsTrue(ex.hasCycle(&l0));
        }

        TEST_METHOD(Ex141_Test_hasCycle1)
        {
            Ex141 ex;
            ListNode l0(0), l1(1), l2(2), l3(3), l4(4);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; 
            l3.next = &l4;
            Assert::IsFalse(ex.hasCycle(&l0));
        }
    };
}