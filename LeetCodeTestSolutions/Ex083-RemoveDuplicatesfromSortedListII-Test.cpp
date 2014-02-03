#include "CppUnitTest.h"
#include "Ex083-RemoveDuplicatesfromSortedListII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex83Test)
    {
    public:

        TEST_METHOD(Ex083_Test_deleteDuplicates)
        {
            Ex83 ex;
            ListNode l1(1), l2(2), l3(2), l4(4);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex083_Test_deleteDuplicates1)
        {
            Ex83 ex;
            ListNode l1(2), l2(2), l3(2), l4(4);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex083_Test_deleteDuplicates2)
        {
            Ex83 ex;
            ListNode l1(1);
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex083_Test_deleteDuplicates3)
        {
            Ex83 ex;
            ListNode l1(2), l2(2), l3(2), l4(2);
            l1.next = &l2; l2.next = &l3, l3.next = &l4;
            ListNode *r = ex.deleteDuplicates(&l1);
            Assert::IsNull(r);
        }
    };
}