#include "CppUnitTest.h"
#include "Ex010-RegularExpressionMatching.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex10Test)
    {
    public:

        TEST_METHOD(Ex010_Test_isMatch)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch("aa","a"));
            Assert::IsFalse(ex.isMatch("aaa","aa"));
            Assert::IsTrue(ex.isMatch("aa","aa"));
            Assert::IsTrue(ex.isMatch("aa", "a*"));
            Assert::IsTrue(ex.isMatch("aa", ".*"));
            Assert::IsTrue(ex.isMatch("ab", ".*"));
            Assert::IsTrue(ex.isMatch("aab", "c*a*b"));
            Assert::IsFalse(ex.isMatch("aab", "ddc*a*b"));
            Assert::IsFalse(ex.isMatch("", "c"));
        }

        TEST_METHOD(Ex010_Test_isMatch1)
        {
		    Ex10 ex;
            Assert::IsTrue(ex.isMatch("abcdxyzda", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatch2)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch("abcdxyzdakadyda", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatch3)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch("abcdxyzdakadyd", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatch4)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch("abcdxyzdakadyd", "a.*da.*"));
        }

        TEST_METHOD(Ex010_Test_isMatch5)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch("abcdxyzdakadyda", "a.*da.*d"));
        }

        TEST_METHOD(Ex010_Test_isMatch6)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch("abcdayzdakadaxxdattd", "a.*da.*d"));
        }

        TEST_METHOD(Ex010_Test_isMatch7)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch("abcdayzdakadaxxdattda", "a.*da.*d"));
        }
        //---
        TEST_METHOD(Ex010_Test_isMatchA)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch1("aa","a"));
            Assert::IsFalse(ex.isMatch1("aaa","aa"));
            Assert::IsTrue(ex.isMatch1("aa","aa"));
            Assert::IsTrue(ex.isMatch1("aa", "a*"));
            Assert::IsTrue(ex.isMatch1("aa", ".*"));
            Assert::IsTrue(ex.isMatch1("ab", ".*"));
            Assert::IsTrue(ex.isMatch1("aab", "c*a*b"));
            Assert::IsFalse(ex.isMatch1("aab", "ddc*a*b"));
            Assert::IsFalse(ex.isMatch1("", "c"));
        }

        TEST_METHOD(Ex010_Test_isMatchA1)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("abcdxyzda", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatchA2)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("abcdxyzdakadyda", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatchA3)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch1("abcdxyzdakadyd", "a.*da"));
        }

        TEST_METHOD(Ex010_Test_isMatchA4)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("abcdxyzdakadyd", "a.*da.*"));
        }

        TEST_METHOD(Ex010_Test_isMatchA5)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch1("abcdxyzdakadyda", "a.*da.*d"));
        }

        TEST_METHOD(Ex010_Test_isMatchA6)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("abcdayzdakadaxxdattd", "a.*da.*d"));
        }

        TEST_METHOD(Ex010_Test_isMatchA7)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch1("abcdayzdakadaxxdattda", "a.*da.*d"));
        }

        TEST_METHOD(Ex010_Test_isMatchA8)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("aaa", "a*a"));
        }

        TEST_METHOD(Ex010_Test_isMatchA9)
        {
            Ex10 ex;
            Assert::IsTrue(ex.isMatch1("aaa", "ab*a*c*a"));
        }

        TEST_METHOD(Ex010_Test_isMatchA10)
        {
            Ex10 ex;
            Assert::IsFalse(ex.isMatch1("*", "*"));
        }
    };
}