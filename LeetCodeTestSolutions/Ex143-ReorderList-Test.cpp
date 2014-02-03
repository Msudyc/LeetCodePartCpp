#include "CppUnitTest.h"
#include "Ex143-ReorderList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex143Test)
    {
    public:

        TEST_METHOD(Ex143_Test_reorderList)
        {
            Ex143 ex;
            ListNode l1(1), l2(2), l3(3), l4(4);
            l1.next = &l2; l2.next = &l3; l3.next = &l4;
            ex.reorderList(&l1);
            Assert::AreEqual(4, l1.next->val);
            Assert::AreEqual(2, l1.next->next->val);
            Assert::AreEqual(3, l1.next->next->next->val);
        }

        TEST_METHOD(Ex143_Test_reorderList1)
        {
            Ex143 ex;
            ListNode l1(1);
            ex.reorderList(&l1);
            Assert::AreEqual(1, l1.val);
        }

        TEST_METHOD(Ex143_Test_reorderList2)
        {
            Ex143 ex;
            ListNode l1(1), l2(2);
            l1.next = &l2;
            ex.reorderList(&l1);
            Assert::AreEqual(1, l1.val);
            Assert::AreEqual(2, l1.next->val);
        }

        TEST_METHOD(Ex143_Test_reorderList3)
        {
            Ex143 ex;
            ListNode l1(1), l2(2), l3(3);
            l1.next = &l2; l2.next = &l3;
            ex.reorderList(&l1);
            Assert::AreEqual(1, l1.val);
            Assert::AreEqual(3, l1.next->val);
            Assert::AreEqual(2, l1.next->next->val);
        }
    };
}