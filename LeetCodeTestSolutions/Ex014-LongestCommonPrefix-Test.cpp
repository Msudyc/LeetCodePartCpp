#include "CppUnitTest.h"
#include "Ex014-LongestCommonPrefix.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex14Test)
    {
    public:

        TEST_METHOD(Ex014_Test_longestCommonPrefix)
        {
            Ex14 ex;
            vector<string> t;
            t.push_back("aab");
            t.push_back("aabd");
            t.push_back("aabe");
            Assert::AreEqual(string("aab"), ex.longestCommonPrefix(t));
        }

        TEST_METHOD(Ex014_Test_longestCommonPrefix1)
        {
            Ex14 ex;
            vector<string> t;
            Assert::AreEqual(string(""), ex.longestCommonPrefix(t));
        }

        TEST_METHOD(Ex014_Test_longestCommonPrefix2)
        {
            Ex14 ex;
            vector<string> t;
            t.push_back("aab");
            Assert::AreEqual(string("aab"), ex.longestCommonPrefix(t));
        }

        TEST_METHOD(Ex014_Test_longestCommonPrefix3)
        {
            Ex14 ex;
            vector<string> t;
            t.push_back("a");
            t.push_back("b");
            t.push_back("aabe");
            Assert::AreEqual(string(""), ex.longestCommonPrefix(t));
        }

        TEST_METHOD(Ex014_Test_longestCommonPrefix4)
        {
            Ex14 ex;
            vector<string> t;
            t.push_back("aa");
            t.push_back("ab");
            t.push_back("aabe");
            Assert::AreEqual(string("a"), ex.longestCommonPrefix(t));
        }
    };
}