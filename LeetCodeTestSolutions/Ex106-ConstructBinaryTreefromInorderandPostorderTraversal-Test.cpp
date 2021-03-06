#include "CppUnitTest.h"
#include "Ex106-ConstructBinaryTreefromInorderandPostorderTraversal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex106Test)
    {
    public:

        TEST_METHOD(Ex106_Test_buildTree)
        {
            Ex106 ex;
            vector<int> a;
            a.push_back(4);a.push_back(2);a.push_back(1);a.push_back(3);
            vector<int> b;
            b.push_back(4);b.push_back(2);b.push_back(3);b.push_back(1);
            TreeNode *r = ex.buildTree(a, b);
            Assert::AreEqual(1, r->val);
            Assert::AreEqual(2, r->left->val);
            Assert::AreEqual(3, r->right->val);
            Assert::AreEqual(4, r->left->left->val);
        }
    };
}