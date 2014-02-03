#include "CppUnitTest.h"
#include "Ex008-StringtoInteger.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex8Test)
    {
    public:

        TEST_METHOD(Ex008_Test_atoi)
        {
            Ex8 ex;
            Assert::AreEqual(1234, ex.atoi("1234"));
            Assert::AreEqual(-1234, ex.atoi("-1234"));
            Assert::AreEqual(-1234, ex.atoi("    -1234"));
            Assert::AreEqual(0, ex.atoi("aaa-1234"));
            Assert::AreEqual(INT_MAX, ex.atoi("2147483648"));
            Assert::AreEqual(INT_MIN, ex.atoi("-2147483649"));
            Assert::AreEqual(INT_MAX, ex.atoi("    10522545459"));
            Assert::AreEqual(INT_MIN, ex.atoi("      -11919730356x"));
        }
    };
}