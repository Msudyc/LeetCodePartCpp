#include "CppUnitTest.h"
#include "Ex019-RemoveNthNodeFromEndofList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex19Test)
    {
    public:

        TEST_METHOD(Ex019_Test_removeNthFromEnd)
        {
            Ex19 ex;
            ListNode h0(0); ListNode h1(1); ListNode h2(2); ListNode h3(3);

            h0.next = &h1; h1.next = &h2; h2.next = &h3;
            ListNode *r = ex.removeNthFromEnd(&h0, 1);
            Assert::AreEqual(0, r->val);
            Assert::AreEqual(1, r->next->val);
            Assert::AreEqual(2, r->next->next->val);
            Assert::IsNull(r->next->next->next);

            h0.next = &h1; h1.next = &h2; h2.next = &h3;
            r = ex.removeNthFromEnd(&h0, 2);
            Assert::AreEqual(0, r->val);
            Assert::AreEqual(1, r->next->val);
            Assert::AreEqual(3, r->next->next->val);

            h0.next = &h1; h1.next = &h2; h2.next = &h3;
            r = ex.removeNthFromEnd(&h0, 3);
            Assert::AreEqual(0, r->val);
            Assert::AreEqual(2, r->next->val);
            Assert::AreEqual(3, r->next->next->val);

            h0.next = &h1; h1.next = &h2; h2.next = &h3;
            r = ex.removeNthFromEnd(&h0, 4);
            Assert::AreEqual(1, r->val);
            Assert::AreEqual(2, r->next->val);
            Assert::AreEqual(3, r->next->next->val);            
        }

        TEST_METHOD(Ex019_Test_removeNthFromEnd1)
        {
            Ex19 ex;
            ListNode h0(0);
            ListNode *r = ex.removeNthFromEnd(&h0, 1);
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex019_Test_removeNthFromEnd2)
        {
            Ex19 ex;
            ListNode h0(0); ListNode h1(1);

            h0.next = &h1;
            ListNode *r = ex.removeNthFromEnd(&h0, 1);
            Assert::AreEqual(0, r->val);
        }

        TEST_METHOD(Ex019_Test_removeNthFromEnd3)
        {
            Ex19 ex;
            ListNode h0(0); ListNode h1(1);

            h0.next = &h1;
            ListNode *r = ex.removeNthFromEnd(&h0, 2);
            Assert::AreEqual(1, r->val);
        }
    };
}