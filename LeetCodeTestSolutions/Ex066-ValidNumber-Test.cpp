#include "CppUnitTest.h"
#include "Ex066-ValidNumber.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex66Test)
    {
    public:

        TEST_METHOD(Ex066_Test_isNumber)
        {
            Ex66 ex;
            Assert::IsFalse(ex.isNumber("aaa"));
        }

        TEST_METHOD(Ex066_Test_isNumber1)
        {
            Ex66 ex;
            Assert::IsTrue(ex.isNumber("110.1123"));
        }

        TEST_METHOD(Ex066_Test_isNumber2)
        {
            Ex66 ex;
            Assert::IsFalse(ex.isNumber("10a"));
        }

        TEST_METHOD(Ex066_Test_isNumber3)
        {
            Ex66 ex;
            Assert::IsTrue(ex.isNumber("001.e3"));
        }

        TEST_METHOD(Ex066_Test_isNumber4)
        {
            Ex66 ex;
            Assert::IsFalse(ex.isNumber("1e345.1123"));
        }
    };
}