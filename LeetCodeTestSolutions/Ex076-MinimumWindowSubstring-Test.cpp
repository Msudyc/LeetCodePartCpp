#include "CppUnitTest.h"
#include "Ex076-MinimumWindowSubstring.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex76Test)
    {
    public:

        TEST_METHOD(Ex076_Test_minWindow)
        {
            Ex76 ex;
            Assert::AreEqual(string("BANC"), ex.minWindow("ADOBECODEBANC", "ABC"));
        }

        TEST_METHOD(Ex076_Test_minWindow1)
        {
            Ex76 ex;
            Assert::AreEqual(string(""), ex.minWindow("ABCDEFG", "XYZ"));
        }

        TEST_METHOD(Ex076_Test_minWindow2)
        {
            Ex76 ex;
            Assert::AreEqual(string("A"), ex.minWindow("A", "A"));
        }

        TEST_METHOD(Ex076_Test_minWindow3)
        {
            Ex76 ex;
            Assert::AreEqual(string("BAC"), ex.minWindow("GBACDEF", "BC"));
        }
    };
}