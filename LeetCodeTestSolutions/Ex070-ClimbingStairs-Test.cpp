#include "CppUnitTest.h"
#include "Ex070-ClimbingStairs.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex70Test)
    {
    public:

        TEST_METHOD(Ex070_Test_climbStairs)
        {
            Ex70 ex;
            Assert::AreEqual(55, ex.climbStairs(9));
        }

        TEST_METHOD(Ex070_Test_climbStairs1)
        {
            Ex70 ex;
            Assert::AreEqual(1, ex.climbStairs(1));
        }

        TEST_METHOD(Ex070_Test_climbStairs2)
        {
            Ex70 ex;
            Assert::AreEqual(2, ex.climbStairs(2));
        }

        TEST_METHOD(Ex070_Test_climbStairs3)
        {
            Ex70 ex;
            Assert::AreEqual(5, ex.climbStairs(4));
        }

        TEST_METHOD(Ex070_Test_climbStairs4)
        {
            Ex70 ex;
            Assert::AreEqual(34, ex.climbStairs(8));
        }
    };
}