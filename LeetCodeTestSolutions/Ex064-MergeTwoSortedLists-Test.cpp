#include "CppUnitTest.h"
#include "Ex064-MergeTwoSortedLists.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex64Test)
    {
    public:

        TEST_METHOD(Ex064_Test_mergeTwoLists)
        {
            Ex64 ex;
            ListNode a0(1), a1(2), a2(5);
            a0.next = &a1; a1.next = &a2;

            ListNode b0(3), b1(4), b2(6);
            b0.next = &b1; b1.next = &b2;

            ListNode *r = ex.mergeTwoLists(&a0, &b0);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::AreEqual(6, r->val); r = r->next;
        }

        TEST_METHOD(Ex064_Test_mergeTwoLists1)
        {
            Ex64 ex;
            ListNode a0(1);
            ListNode b0(3);
            ListNode *r = ex.mergeTwoLists(&a0, &b0);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
        }

        TEST_METHOD(Ex064_Test_mergeTwoLists2)
        {
            Ex64 ex;
            ListNode a0(1), a1(2), a2(5);
            a0.next = &a1; a1.next = &a2;

            ListNode *r = ex.mergeTwoLists(&a0, NULL);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
        }

        TEST_METHOD(Ex064_Test_mergeTwoLists3)
        {
            Ex64 ex;
            ListNode a0(1), a1(2), a2(5);
            a0.next = &a1; a1.next = &a2;

            ListNode *r = ex.mergeTwoLists(NULL, &a0);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
        }
    };
}