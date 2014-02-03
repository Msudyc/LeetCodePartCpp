#include "CppUnitTest.h"
#include "Ex127-WordLadderII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex127est)
    {
    public:

        TEST_METHOD(Ex127_Test_findLadders)
        {
            Ex127 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            vector<vector<string>> res = ex.findLadders("hit", "cog", dict);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex127_Test_findLadders1)
        {
            Ex127 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            vector<vector<string>> res = ex.findLadders("abc", "cog", dict);
            Assert::AreEqual(0, (int)res.size());
        }

        TEST_METHOD(Ex127_Test_findLadders2)
        {
            Ex127 ex;
            unordered_set<string> dict;
            dict.insert("hot"); dict.insert("dot"); dict.insert("dog"); 
            dict.insert("lot"); dict.insert("log");
            vector<vector<string>> res = ex.findLadders("cog", "cog", dict);
            Assert::AreEqual(2, (int)res.size());
        }
    };
}