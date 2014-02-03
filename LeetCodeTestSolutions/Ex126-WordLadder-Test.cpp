#include "CppUnitTest.h"
#include "Ex126-WordLadder.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex126Test)
    {
    public:

        TEST_METHOD(Ex126_Test_ladderLength)
        {
            Ex126 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            Assert::AreEqual(5, ex.ladderLength("hit", "cog", dict));
        }

        TEST_METHOD(Ex126_Test_ladderLength1)
        {
            Ex126 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            Assert::AreEqual(2, ex.ladderLength("hit", "hit", dict));
        }

        TEST_METHOD(Ex126_Test_ladderLength2)
        {
            Ex126 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            Assert::AreEqual(2, ex.ladderLength("hit", "hot", dict));
        }
    };
}