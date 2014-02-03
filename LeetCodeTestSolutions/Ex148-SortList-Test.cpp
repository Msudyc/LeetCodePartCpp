#include "CppUnitTest.h"
#include "Ex148-SortList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex148Test)
    {
    public:

        TEST_METHOD(Ex148_Test_sortList)
        {
            Ex148 ex;
            ListNode l0(3), l1(1), l2(4), l3(2), l4(0);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; 
            l3.next = &l4;
            ListNode *r = ex.sortList(&l0);
            Assert::AreEqual(0, r->val); r = r->next;
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
        }

        TEST_METHOD(Ex148_Test_sortList1)
        {
            Ex148 ex;
            ListNode l0(3), l1(1);
            l0.next = &l1;
            ListNode *r = ex.sortList(&l0);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
        }

        TEST_METHOD(Ex148_Test_sortList2)
        {
            Ex148 ex;
            ListNode l0(3);
            ListNode *r = ex.sortList(&l0);
            Assert::AreEqual(3, r->val); r = r->next;
        }
    };
}