#include "CppUnitTest.h"
#include "Ex028-DivideTwoIntegers.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex28Test)
    {
    public:

        TEST_METHOD(Ex028_Test_divide)
        {
            Ex28 ex;
            Assert::AreEqual(3, ex.divide(7, 2));
            Assert::AreEqual(4, ex.divide(12, 3));
            Assert::AreEqual(-1, ex.divide(1, -1));
            Assert::AreEqual(9, ex.divide(29, 3));
        }
    };
}