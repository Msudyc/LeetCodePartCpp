#include "CppUnitTest.h"
#include "Ex087-ScrambleString.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex87Test)
    {
    public:

        TEST_METHOD(Ex087_Test_isScramble)
        {
            Ex87 ex;
            Assert::IsTrue(ex.isScramble("great", "rgaet"));
        }

        TEST_METHOD(Ex087_Test_isScramble1)
        {
            Ex87 ex;
            Assert::IsTrue(ex.isScramble("ab", "ba"));
        }

        TEST_METHOD(Ex087_Test_isScramble2)
        {
            Ex87 ex;
            Assert::IsTrue(ex.isScramble("a", "a"));
        }

        TEST_METHOD(Ex087_Test_isScramble3)
        {
            Ex87 ex;
            Assert::IsFalse(ex.isScramble("breat", "rgaet"));
        }

        TEST_METHOD(Ex087_Test_isScramble4)
        {
            Ex87 ex;
            Assert::IsFalse(ex.isScramble("b", "c"));
        }
    };
}