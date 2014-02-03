#include "CppUnitTest.h"
#include "Ex038-CombinationSum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex38Test)
    {
    public:

        TEST_METHOD(Ex038_Test_combinationSum)
        {
            Ex38 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7);
            vector<vector<int>> res = ex.combinationSum(t, 7);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex038_Test_combinationSum1)
        {
            Ex38 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7);
            vector<vector<int>> res = ex.combinationSum(t, 6);
            Assert::AreEqual(3, (int)res.size());
        }

        TEST_METHOD(Ex038_Test_combinationSum2)
        {
            Ex38 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7);
            vector<vector<int>> res = ex.combinationSum(t, 1);
            Assert::AreEqual(0, (int)res.size());
        }
    };
}