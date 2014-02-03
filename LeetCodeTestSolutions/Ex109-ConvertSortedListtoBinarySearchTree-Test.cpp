#include "CppUnitTest.h"
#include "Ex109-ConvertSortedListtoBinarySearchTree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex109Test)
    {
    public:

        TEST_METHOD(Ex109_Test_sortedListToBST)
        {
            Ex109 ex;
            ListNode l1(1), l2(2), l3(3);
            l1.next = &l2; l2.next = &l3;
            TreeNode *r = ex.sortedListToBST(&l1);
            Assert::AreEqual(2, r->val);
            Assert::AreEqual(1, r->left->val);
            Assert::AreEqual(3, r->right->val);
        }
    };
}