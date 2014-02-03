#include "CppUnitTest.h"
#include "Ex128-LongestConsecutiveSequence.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex128Test)
    {
    public:

        TEST_METHOD(Ex128_Test_longestConsecutive)
        {
            Ex128 ex;
            int row0[] = {100, 4, 300, 2, 6, 1, 56, 3, 9, 30};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(4, ex.longestConsecutive(r0));
        }

        TEST_METHOD(Ex128_Test_longestConsecutive1)
        {
            Ex128 ex;
            int row0[] = {100};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(1, ex.longestConsecutive(r0));
        }
    };
}