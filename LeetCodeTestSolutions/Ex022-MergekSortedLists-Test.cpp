#include "CppUnitTest.h"
#include "Ex022-MergekSortedLists.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex22Test)
    {
    public:

        TEST_METHOD(Ex022_Test_mergeKLists)
        {
            Ex22 ex;
            vector<ListNode *> t;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);

            h1.next = &h4; h4.next = &h7;
            h2.next = &h5; h5.next = &h8;
            h3.next = &h6; h6.next = &h9;

            t.push_back(&h1);
            t.push_back(&h2);
            t.push_back(&h3);

            ListNode *r = ex.mergeKLists(t);

            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::AreEqual(2, r->val);
            r = r->next;
            Assert::AreEqual(3, r->val);
            r = r->next;
            Assert::AreEqual(4, r->val);
            r = r->next;
            Assert::AreEqual(5, r->val);
            r = r->next;
            Assert::AreEqual(6, r->val);
            r = r->next;
            Assert::AreEqual(7, r->val);
            r = r->next;
            Assert::AreEqual(8, r->val);
            r = r->next;
            Assert::AreEqual(9, r->val);
            r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex022_Test_mergeKLists1)
        {
            Ex22 ex;
            vector<ListNode *> t;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);

            h1.next = &h4; h4.next = &h7; h7.next = &h8;
            h2.next = &h5;
            h3.next = &h6; h6.next = &h9;

            t.push_back(&h1);
            t.push_back(&h2);
            t.push_back(&h3);

            ListNode *r = ex.mergeKLists(t);

            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::AreEqual(2, r->val);
            r = r->next;
            Assert::AreEqual(3, r->val);
            r = r->next;
            Assert::AreEqual(4, r->val);
            r = r->next;
            Assert::AreEqual(5, r->val);
            r = r->next;
            Assert::AreEqual(6, r->val);
            r = r->next;
            Assert::AreEqual(7, r->val);
            r = r->next;
            Assert::AreEqual(8, r->val);
            r = r->next;
            Assert::AreEqual(9, r->val);
            r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex022_Test_mergeKLists2)
        {
            Ex22 ex;
            vector<ListNode *> t;
            ListNode h1(1);  ListNode h2(2); ListNode h3(3);
            ListNode h4(4);  ListNode h5(5); ListNode h6(6);
            ListNode h7(7);  ListNode h8(8); ListNode h9(9);
            
            h2.next = &h4; h4.next = &h5; h5.next = &h7; h7.next = &h8;
            h3.next = &h6; h6.next = &h9;

            t.push_back(&h1);
            t.push_back(&h2);
            t.push_back(&h3);

            ListNode *r = ex.mergeKLists(t);

            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::AreEqual(2, r->val);
            r = r->next;
            Assert::AreEqual(3, r->val);
            r = r->next;
            Assert::AreEqual(4, r->val);
            r = r->next;
            Assert::AreEqual(5, r->val);
            r = r->next;
            Assert::AreEqual(6, r->val);
            r = r->next;
            Assert::AreEqual(7, r->val);
            r = r->next;
            Assert::AreEqual(8, r->val);
            r = r->next;
            Assert::AreEqual(9, r->val);
            r = r->next;
            Assert::IsNull(r);
        }
    };
}