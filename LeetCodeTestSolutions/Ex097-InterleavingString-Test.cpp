#include "CppUnitTest.h"
#include "Ex097-InterleavingString.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex97Test)
    {
    public:

        TEST_METHOD(Ex097_Test_isInterleave)
        {
            Ex97 ex;
            Assert::IsTrue(ex.isInterleave("ace", "bdf", "abcdef"));
        }

        TEST_METHOD(Ex097_Test_isInterleave1)
        {
            Ex97 ex;
            Assert::IsFalse(ex.isInterleave("ake", "bdf", "abcdef"));
        }

        TEST_METHOD(Ex097_Test_isInterleave2)
        {
            Ex97 ex;
            Assert::IsTrue(ex.isInterleave("a", "b", "ba"));
        }

        TEST_METHOD(Ex097_Test_isInterleave3)
        {
            Ex97 ex;
            Assert::IsTrue(ex.isInterleave("", "", ""));
        }

        TEST_METHOD(Ex097_Test_isInterleave4)
        {
            Ex97 ex;
            Assert::IsTrue(ex.isInterleave("a", "", "a"));
        }

        TEST_METHOD(Ex097_Test_isInterleave5)
        {
            Ex97 ex;
            Assert::IsFalse(ex.isInterleave("ab", "cd", "dcab"));
        }
    };
}