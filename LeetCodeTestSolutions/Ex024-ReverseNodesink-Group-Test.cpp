#include "CppUnitTest.h"
#include "Ex024-ReverseNodesink-Group.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex024Test)
    {
    public:

        TEST_METHOD(Ex024_Test_reverseKGroup)
        {
            Ex24 ex;
            ListNode a1(1), a2(2), a3(3), a4(4), a5(5), a6(6), a7(7);
            a1.next = &a2; a2.next = &a3; a3.next = &a4; 
            a4.next = &a5; a5.next = &a6; a6.next = &a7;
            ListNode *r = ex.reverseKGroup(&a1, 3);
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(6, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(7, r->val); r = r->next;
        }

        TEST_METHOD(Ex024_Test_reverseKGroup1)
        {
            Ex24 ex;
            ListNode a1(1), a2(2), a3(3), a4(4), a5(5), a6(6), a7(7);
            a1.next = &a2; a2.next = &a3; a3.next = &a4; 
            a4.next = &a5; a5.next = &a6; a6.next = &a7;
            ListNode *r = ex.reverseKGroup(&a1, 10);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::AreEqual(6, r->val); r = r->next;
            Assert::AreEqual(7, r->val); r = r->next;
        }
    };
}