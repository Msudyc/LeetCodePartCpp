#include "CppUnitTest.h"
#include "Ex092-ReverseLinkedListII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex92Test)
    {
    public:

        TEST_METHOD(Ex092_Test_reverseBetween)
        {
            Ex92 ex;
            ListNode l1(1), l2(2), l3(3), l4(4), l5(5);
            l1.next = &l2; l2.next = &l3; l3.next = &l4;
            l4.next = &l5;
            ListNode *r = ex.reverseBetween(&l1, 2, 4);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex092_Test_reverseBetween1)
        {
            Ex92 ex;
            ListNode l1(1);
            ListNode *r = ex.reverseBetween(&l1, 1, 1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex092_Test_reverseBetween2)
        {
            Ex92 ex;
            ListNode l1(1), l2(2), l3(3), l4(4), l5(5);
            l1.next = &l2; l2.next = &l3; l3.next = &l4;
            l4.next = &l5;
            ListNode *r = ex.reverseBetween(&l1, 1, 5);
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex092_Test_reverseBetween3)
        {
            Ex92 ex;
            ListNode l1(1), l2(2), l3(3), l4(4), l5(5);
            l1.next = &l2; l2.next = &l3; l3.next = &l4;
            l4.next = &l5;
            ListNode *r = ex.reverseBetween(&l1, 5, 5);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::IsNull(r);
        }
    };
}