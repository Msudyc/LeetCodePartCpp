#include "CppUnitTest.h"
#include "Ex039-CombinationSumII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex39Test)
    {
    public:

        TEST_METHOD(Ex039_Test_combinationSum2_1)
        {
            Ex39 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7);
            vector<vector<int>> res = ex.combinationSum2(t, 7);
            Assert::AreEqual(1, (int)res.size());
        }

        TEST_METHOD(Ex039_Test_combinationSum2_2)
        {
            Ex39 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7);
            vector<vector<int>> res = ex.combinationSum2(t, 5);
            Assert::AreEqual(1, (int)res.size());
        }

        TEST_METHOD(Ex039_Test_combinationSum2_3)
        {
            Ex39 ex;
            vector<int> t;
            t.push_back(2); t.push_back(3); t.push_back(6); t.push_back(7); 
            t.push_back(1); t.push_back(1);
            vector<vector<int>> res = ex.combinationSum2(t, 6);
            Assert::AreEqual(2, (int)res.size());
        }
    };
}