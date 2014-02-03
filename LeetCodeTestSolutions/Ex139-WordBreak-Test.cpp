#include "CppUnitTest.h"
#include "Ex139-WordBreak.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex139Test)
    {
    public:

        TEST_METHOD(Ex139_Test_wordBreak)
        {
            Ex139 ex;
            unordered_set<string> dict;
            dict.insert("leet"); dict.insert("code");
            Assert::IsTrue(ex.wordBreak("leetcode", dict));
        }

        TEST_METHOD(Ex139_Test_wordBreak1)
        {
            Ex139 ex;
            unordered_set<string> dict;
            dict.insert("leet"); dict.insert("codeaa");
            Assert::IsFalse(ex.wordBreak("leetcode", dict));
        }
    };
}