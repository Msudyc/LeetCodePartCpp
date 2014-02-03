#include "CppUnitTest.h"
#include "Ex086-PartitionList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex86Test)
    {
    public:

        TEST_METHOD(Ex086_Test_partition)
        {
            Ex86 ex;
            ListNode l1(1), l2(3), l3(2), l4(5), l5(2);
            l1.next = &l2; l2.next = &l3, l3.next = &l4; l4.next = &l5;
            ListNode *r = ex.partition(&l1, 3);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex086_Test_partition1)
        {
            Ex86 ex;
            ListNode l1(1);
            ListNode *r = ex.partition(&l1, 1);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex086_Test_partition2)
        {
            Ex86 ex;
            ListNode *r = ex.partition(NULL, 3);
            Assert::IsNull(r);
        }

        TEST_METHOD(Ex086_Test_partition3)
        {
            Ex86 ex;
            ListNode l1(1), l2(2), l3(3), l4(4), l5(5);
            l1.next = &l2; l2.next = &l3, l3.next = &l4; l4.next = &l5;
            ListNode * r = ex.partition(&l1, 3);
            Assert::AreEqual(1, r->val); r = r->next;
            Assert::AreEqual(2, r->val); r = r->next;
            Assert::AreEqual(3, r->val); r = r->next;
            Assert::AreEqual(4, r->val); r = r->next;
            Assert::AreEqual(5, r->val); r = r->next;
            Assert::IsNull(r);
        }
    };
}