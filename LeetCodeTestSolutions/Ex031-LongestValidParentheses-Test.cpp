#include "CppUnitTest.h"
#include "Ex031-LongestValidParentheses.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(ExSampleTest)
    {
    public:

        TEST_METHOD(Ex031_Test_longestValidParentheses)
        {
            Ex31 ex;
            Assert::AreEqual(4, ex.longestValidParentheses(")()())"));
            Assert::AreEqual(2, ex.longestValidParentheses("()"));
            Assert::AreEqual(2, ex.longestValidParentheses("()(()"));
        }

        TEST_METHOD(Ex031_Test_longestValidParentheses1)
        {
            Ex31 ex;
            Assert::AreEqual(0, ex.longestValidParentheses(""));
            Assert::AreEqual(0, ex.longestValidParentheses("("));
            Assert::AreEqual(0, ex.longestValidParentheses(")"));
        }
    };
}