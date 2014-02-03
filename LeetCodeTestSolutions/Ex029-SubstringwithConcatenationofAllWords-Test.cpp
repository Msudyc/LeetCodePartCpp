#include "CppUnitTest.h"
#include "Ex029-SubstringwithConcatenationofAllWords.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex29Test)
    {
    public:

        TEST_METHOD(Ex029_Test_findSubstring)
        {
            Ex29 ex;
            vector<string> s;
            s.push_back("bar");
            s.push_back("foo");
            vector<int> r = ex.findSubstring("barfoothefoobarman", s);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(9, r[1]);

            s.clear(); r.clear();
            s.push_back("a");
            s.push_back("a");
            r = ex.findSubstring("aaa", s);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(1, r[1]);

            s.clear(); r.clear();
            s.push_back("a");
            s.push_back("a");
            s.push_back("b");
            r = ex.findSubstring("abababab", s);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(2, r[1]);
            Assert::AreEqual(4, r[2]);
        }
    };
}