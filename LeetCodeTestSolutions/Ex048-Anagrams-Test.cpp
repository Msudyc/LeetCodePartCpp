#include "CppUnitTest.h"
#include "Ex048-Anagrams.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex48Test)
    {
    public:

        TEST_METHOD(Ex048_Test_anagrams)
        {
            Ex48 ex;
            vector<string> t;
            t.push_back("abcd");
            t.push_back("dcbd");
            t.push_back("dcba");
            t.push_back("fcba");
            vector<string> r = ex.anagrams(t);
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex048_Test_anagrams1)
        {
            Ex48 ex;
            vector<string> t;
            t.push_back("abc");
            t.push_back("cba");
            t.push_back("ad");
            t.push_back("da");
            t.push_back("dac");
            vector<string> r = ex.anagrams(t);
            Assert::AreEqual(4, (int)r.size());
        }
    };
}