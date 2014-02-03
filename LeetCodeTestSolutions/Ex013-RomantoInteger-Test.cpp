#include "CppUnitTest.h"
#include "Ex013-RomantoInteger.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex13Test)
    {
    public:

        TEST_METHOD(Ex013_Test_romanToInt)
        {
            Ex13 ex;
            Assert::AreEqual(138, ex.romanToInt("CXXXVIII"));
            Assert::AreEqual(1996, ex.romanToInt("MCMXCVI"));
        }
    };
}