#include "CppUnitTest.h"
#include "Ex132-PalindromePartitioningII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex132Test)
    {
    public:

        TEST_METHOD(Ex132_Test_minCut)
        {
            Ex132 ex;
            Assert::AreEqual(1, ex.minCut("aab"));
        }

        TEST_METHOD(Ex132_Test_minCut1)
        {
            Ex132 ex;
            Assert::AreEqual(0, ex.minCut("aa"));
        }

        TEST_METHOD(Ex132_Test_minCut2)
        {
            Ex132 ex;
            Assert::AreEqual(0, ex.minCut("b"));
        }
    };
}