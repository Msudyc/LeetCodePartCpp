#include "CppUnitTest.h"
#include "Ex052-MaximumSubarray.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex52Test)
    {
    public:

        TEST_METHOD(Ex052_Test_maxSubArray)
        {
            Ex52 ex;
            int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
            Assert::AreEqual(6, ex.maxSubArray(A, 9));
        }

        TEST_METHOD(Ex052_Test_maxSubArray1)
        {
            Ex52 ex;
            int A[] = {-2, 1, 1, 4, -1};
            Assert::AreEqual(6, ex.maxSubArray(A, 5));
        }

        TEST_METHOD(Ex052_Test_maxSubArray2)
        {
            Ex52 ex;
            int A[] = {-2, 1, 1, 4, -1, 6};
            Assert::AreEqual(11, ex.maxSubArray(A, 6));
        }

        TEST_METHOD(Ex052_Test_maxSubArray3)
        {
            Ex52 ex;
            int A[] = {0, 1, 1, 4, 1, 6};
            Assert::AreEqual(13, ex.maxSubArray(A, 6));
        }
    };
}