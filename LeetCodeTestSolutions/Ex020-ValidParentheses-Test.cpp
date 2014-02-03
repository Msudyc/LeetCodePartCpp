#include "CppUnitTest.h"
#include "Ex020-ValidParentheses.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex20Test)
    {
    public:

        TEST_METHOD(Ex020_Test_isValid)
        {
            Ex20 ex;
            string s = "()[]{}", s2 ="([)]";
            Assert::IsTrue(ex.isValid(s));
            Assert::IsFalse(ex.isValid(s2));
        }

        TEST_METHOD(Ex020_Test_isValid1)
        {
            Ex20 ex;
            string s = "", s2 ="(()]";
            Assert::IsTrue(ex.isValid(s));
            Assert::IsFalse(ex.isValid(s2));
        }

        TEST_METHOD(Ex020_Test_isValid2)
        {
            Ex20 ex;
            string s = "(((())))[{()}]", s2 ="(((())))[{(}]";
            Assert::IsTrue(ex.isValid(s));
            Assert::IsFalse(ex.isValid(s2));
        }
    };
}