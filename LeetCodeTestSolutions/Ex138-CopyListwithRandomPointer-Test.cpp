#include "CppUnitTest.h"
#include "Ex138-CopyListwithRandomPointer.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex138Test)
    {
    public:

        TEST_METHOD(Ex138_Test_copyRandomList)
        {
            Ex138 ex;
            RandomListNode l0(0), l1(1), l2(2), l3(3), l4(4);
            l0.next = &l1; l1.next = &l2; l2.next = &l3; l3.next = &l4;
            l0.random = &l2; l3.random = &l0;

            RandomListNode *r = ex.copyRandomList(&l0);
            Assert::AreEqual(0, r->label);
            Assert::AreEqual(2, r->random->label); r = r->next;
            Assert::AreEqual(1, r->label); r = r->next;
            Assert::AreEqual(2, r->label); r = r->next;
            Assert::AreEqual(3, r->label);
            Assert::AreEqual(0, r->random->label); r = r->next;
            Assert::AreEqual(4, r->label);
        }
    };
}