#include "CppUnitTest.h"
#include "Ex005-LongestPalindromicSubstring.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex5Test)
    {
    public:

        TEST_METHOD(Ex005_Test_longestPalindrome)
        {
            Ex5 ex;
            string s = "abbac";
            Assert::AreEqual(string("abba"), ex.longestPalindrome(s));
        }

        TEST_METHOD(Ex005_Test_longestPalindrome1)
        {
            Ex5 ex;
            string s = "abbac";
            Assert::AreEqual(string("abba"), ex.longestPalindrome1(s));
        }

        TEST_METHOD(Ex005_Test_longestPalindrome2)
        {
            Ex5 ex;
            string s = "abbac";
            Assert::AreEqual(string("abba"), ex.longestPalindrome2(s));
        }

        TEST_METHOD(Ex005_Test_longestPalindrome3)
        {
            Ex5 ex;
            string s = "abbac";
            Assert::AreEqual(string("abba"), ex.longestPalindrome3(s));
        }
    };
}