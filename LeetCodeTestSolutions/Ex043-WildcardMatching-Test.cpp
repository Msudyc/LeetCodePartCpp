#include "CppUnitTest.h"
#include "Ex043-WildcardMatching.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex43Test)
    {
    public:

        TEST_METHOD(Ex043_Test_isMatch)
        {
            Ex43 ex;
            Assert::IsFalse(ex.isMatch("aa","a"));
            Assert::IsTrue(ex.isMatch("aa","a*"));
        }

        TEST_METHOD(Ex043_Test_isMatch1)
        {
            Ex43 ex;
            Assert::IsFalse(ex.isMatch("aa","abb"));
        }

        TEST_METHOD(Ex043_Test_isMatch2)
        {
            Ex43 ex;
            Assert::IsTrue(ex.isMatch("aa","a?"));
        }

        TEST_METHOD(Ex043_Test_isMatch3)
        {
            Ex43 ex;
            Assert::IsTrue(ex.isMatch("aabb","a*"));
        }

        TEST_METHOD(Ex043_Test_isMatch4)
        {
            Ex43 ex;
            Assert::IsTrue(ex.isMatch("aabb","a?*"));
        }

        TEST_METHOD(Ex043_Test_isMatch5)
        {
            Ex43 ex;
            Assert::IsFalse(ex.isMatch("aacbb","a*c"));
        }
    };
}