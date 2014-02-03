#include "CppUnitTest.h"
#include "Ex060-RotateList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex60Test)
    {
    public:

        TEST_METHOD(Ex060_Test_rotateRight)
        {
            Ex60 ex;
            ListNode l1(1); ListNode l2(2); ListNode l3(3); ListNode l4(4); ListNode l5(5); 
            l1.next = &l2; l2.next = &l3; l3.next = &l4; l4.next = &l5;

            ListNode *r = ex.rotateRight(&l1, 2);
            Assert::AreEqual(4, r->val);
            r = r->next;
            Assert::AreEqual(5, r->val);
        }

        TEST_METHOD(Ex060_Test_rotateRight1)
        {
            Ex60 ex;
            ListNode l1(1);

            ListNode *r = ex.rotateRight(&l1, 1);
            Assert::AreEqual(1, r->val);
        }

        TEST_METHOD(Ex060_Test_rotateRight2)
        {
            Ex60 ex;
            ListNode l1(1); ListNode l2(2); ListNode l3(3); ListNode l4(4); ListNode l5(5); 
            l1.next = &l2; l2.next = &l3; l3.next = &l4; l4.next = &l5;

            ListNode *r = ex.rotateRight(&l1, 5);
            Assert::AreEqual(1, r->val);
            r = r->next;
            Assert::AreEqual(2, r->val);
        }

        TEST_METHOD(Ex060_Test_rotateRight3)
        {
            Ex60 ex;
            ListNode l1(1); ListNode l2(2); ListNode l3(3); ListNode l4(4); ListNode l5(5); 
            l1.next = &l2; l2.next = &l3; l3.next = &l4; l4.next = &l5;

            ListNode *r = ex.rotateRight(&l1, 1);
            Assert::AreEqual(5, r->val);
            r = r->next;
            Assert::AreEqual(1, r->val);
        }
    };
}