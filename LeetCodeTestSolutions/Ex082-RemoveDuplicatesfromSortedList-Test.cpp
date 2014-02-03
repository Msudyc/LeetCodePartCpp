#include "CppUnitTest.h"
#include "Ex082-RemoveDuplicatesfromSortedList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex82Test)
    {
    public:

        TEST_METHOD(Ex082_Test_deleteDuplicates)
        {
            Ex82 ex;
            ListNode l1(1), l2(2), l3(2), l4(4);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
        }

        TEST_METHOD(Ex082_Test_deleteDuplicates1)
        {
            Ex82 ex;
            ListNode l1(1), l2(2), l3(3), l4(4);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
        }

        TEST_METHOD(Ex082_Test_deleteDuplicates2)
        {
            Ex82 ex;
            ListNode l1(1);
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(1, r->val); r = r->next;
        }

        TEST_METHOD(Ex082_Test_deleteDuplicates3)
        {
            Ex82 ex;
            ListNode l1(2), l2(2), l3(2), l4(2);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::IsNull(r);
        }
    };
}