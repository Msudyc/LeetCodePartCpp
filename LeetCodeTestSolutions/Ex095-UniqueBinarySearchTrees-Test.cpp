#include "CppUnitTest.h"
#include "Ex095-UniqueBinarySearchTrees.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex95Test)
    {
    public:

        TEST_METHOD(Ex095_Test_numTrees)
        {
            Ex95 ex;
            Assert::AreEqual(5, ex.numTrees(3));
        }

        TEST_METHOD(Ex095_Test_numTrees1)
        {
            Ex95 ex;
            Assert::AreEqual(1, ex.numTrees(1));
        }

        TEST_METHOD(Ex095_Test_numTrees2)
        {
            Ex95 ex;
            Assert::AreEqual(2, ex.numTrees(2));
        }

        TEST_METHOD(Ex095_Test_numTrees3)
        {
            Ex95 ex;
            Assert::AreEqual(132, ex.numTrees(6));
        }
    };
}