#include "CppUnitTest.h"
#include "Ex040-FirstMissingPositive.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex40Test)
    {
    public:

        TEST_METHOD(Ex040_Test_firstMissingPositive)
        {
            Ex40 ex;
            int A[] = {0, -1, -5, 4, 3, 7, 9, 1};
            Assert::AreEqual(2, ex.firstMissingPositive(A, 8));
        }

        TEST_METHOD(Ex040_Test_firstMissingPositive1)
        {
            Ex40 ex;
            int A[] = {0, 2, -5, 4, 3, 7, 9, 1};
            Assert::AreEqual(5, ex.firstMissingPositive(A, 8));
        }

        TEST_METHOD(Ex040_Test_firstMissingPositive2)
        {
            Ex40 ex;
            int A[] = {0};
            Assert::AreEqual(1, ex.firstMissingPositive(A, 1));
        }

        TEST_METHOD(Ex040_Test_firstMissingPositive3)
        {
            Ex40 ex;
            int A[] = {0, 1, 2, 3, 4, 5};
            Assert::AreEqual(6, ex.firstMissingPositive(A, 6));
        }
    };
}