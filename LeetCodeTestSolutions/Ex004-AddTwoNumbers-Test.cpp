#include "CppUnitTest.h"
#include "Ex004-AddTwoNumbers.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex4Test)
    {
    public:

        TEST_METHOD(Ex004_Test_addTwoNumbers)
        {
            ListNode *l1 = NULL, *l2 = NULL;
            Ex4 ex;
            Assert::IsNull(ex.addTwoNumbers(l1, l2));
        }

        TEST_METHOD(Ex004_Test_addTwoNumbers1)
        {
            ListNode *l1 = new ListNode(5);
            ListNode *l2 = new ListNode(5);
            Ex4 ex;
            ListNode *r = ex.addTwoNumbers(l1, l2);
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
        }

        TEST_METHOD(Ex004_Test_addTwoNumbers2)
        {
            ListNode *l1 = new ListNode(1);
            ListNode *l2 = new ListNode(9); l2->next = new ListNode(9);
            Ex4 ex;
            ListNode *r = ex.addTwoNumbers(l1, l2);
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
        }

        TEST_METHOD(Ex004_Test_addTwoNumbers3)
        {
            ListNode *l1 = new ListNode(1);
            ListNode *l2 = new ListNode(9); l2->next = new ListNode(9); 
            l2->next->next = new ListNode(9);
            Ex4 ex;
            ListNode *r = ex.addTwoNumbers(l1, l2);
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
        }

        TEST_METHOD(Ex004_Test_addTwoNumbers4)
        {
            ListNode *l1 = new ListNode(1);
            ListNode *l2 = new ListNode(9); l2->next = new ListNode(8);
            Ex4 ex;
            ListNode *r = ex.addTwoNumbers(l1, l2);
            Assert::AreEqual(0, r->val);
            r = r->next;
            Assert::AreEqual(9, r->val);
        }
    };
}