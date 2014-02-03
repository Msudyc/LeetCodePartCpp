#include "CppUnitTest.h"
#include "Ex140-WordBreakII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex140Test)
    {
    public:

        TEST_METHOD(Ex140_Test_wordBreak)
        {
            Ex140 ex;
            unordered_set<string> dict;
            dict.insert("cat"); dict.insert("cats");
            dict.insert("and"); dict.insert("sand");
            dict.insert("dog");
            vector<string> r = ex.wordBreak("catsanddog", dict);
            Assert::AreEqual(2, (int)r.size());
        }
    };
}