#include "CppUnitTest.h"
#include "Ex023-SwapNodesinPairs.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex23Test)
    {
    public:

        TEST_METHOD(Ex023_Test_swapPairs)
        {
            Ex23 ex;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);

            h1.next = &h2; h2.next = &h3;
            h3.next = &h4; h4.next = &h5;
            h5.next = &h6; h6.next = &h7;
            h7.next = &h8; h8.next = &h9;

            ListNode * r = ex.swapPairs(&h1);
            Assert::AreEqual(2, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::AreEqual(4, r->val);
            r = r->next;
            Assert::AreEqual(3, r->val);
            r = r->next;
            Assert::AreEqual(6, r->val);
            r = r->next;
            Assert::AreEqual(5, r->val);
            r = r->next;
            Assert::AreEqual(8, r->val);
            r = r->next;
            Assert::AreEqual(7, r->val);
            r = r->next;
            Assert::AreEqual(9, r->val);
            r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex023_Test_swapPairs1)
        {
            Ex23 ex;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);

            ListNode * r = ex.swapPairs(&h1);
            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex023_Test_swapPairs2)
        {
            Ex23 ex;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);

            h1.next = &h2;

            ListNode * r = ex.swapPairs(&h1);
            Assert::AreEqual(2, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::IsNull(r);
        }
    };
}