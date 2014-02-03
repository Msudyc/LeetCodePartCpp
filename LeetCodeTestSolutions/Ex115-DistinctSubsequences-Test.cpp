#include "CppUnitTest.h"
#include "Ex115-DistinctSubsequences.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex115Test)
    {
    public:

        TEST_METHOD(Ex115_Test_numDistinct)
        {
            Ex115 ex;
            Assert::AreEqual(3, ex.numDistinct("rabbbit", "rabbit"));
        }

        TEST_METHOD(Ex115_Test_numDistinct1)
        {
            Ex115 ex;
            Assert::AreEqual(1, ex.numDistinct("rabbit", "rabbit"));
        }

        TEST_METHOD(Ex115_Test_numDistinct2)
        {
            Ex115 ex;
            Assert::AreEqual(1, ex.numDistinct("rabbitk", "rabbit"));
        }
    };
}