#include "CppUnitTest.h"
#include "Ex096-UniqueBinarySearchTreesII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex96Test)
    {
    public:

        TEST_METHOD(Ex096_Test_generateTrees)
        {
            Ex96 ex;
            vector<TreeNode *> r = ex.generateTrees(3);
            Assert::AreEqual(5, (int)r.size());
        }

        TEST_METHOD(Ex096_Test_generateTrees1)
        {
            Ex96 ex;
            vector<TreeNode *> r = ex.generateTrees(1);
            Assert::AreEqual(1, (int)r.size());
            Assert::IsNotNull(r[0]);
        }

        TEST_METHOD(Ex096_Test_generateTrees2)
        {
            Ex96 ex;
            vector<TreeNode *> r = ex.generateTrees(0);
            Assert::AreEqual(1, (int)r.size());
            Assert::IsNull(r[0]);
        }

        TEST_METHOD(Ex096_Test_generateTrees3)
        {
            Ex96 ex;
            vector<TreeNode *> r = ex.generateTrees(4);
            Assert::AreEqual(14, (int)r.size());
        }
    };
}