#include "CppUnitTest.h"
#include "Ex046-PermutationsII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex46Test)
    {
    public:

        TEST_METHOD(Ex046_Test_permuteUnique)
        {
            Ex46 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2);
            vector<vector<int>> res = ex.permuteUnique(t);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex046_Test_permuteUnique1)
        {
            Ex46 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2); t.push_back(3);
            vector<vector<int>> res = ex.permuteUnique(t);
            Assert::AreEqual(6, (int)res.size());
        }

        TEST_METHOD(Ex046_Test_permuteUnique2)
        {
            Ex46 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2); t.push_back(2);
            vector<vector<int>> res = ex.permuteUnique(t);
            Assert::AreEqual(3, (int)res.size());
        }

        TEST_METHOD(Ex046_Test_permuteUnique3)
        {
            Ex46 ex;
            vector<int> t;
            t.push_back(1); t.push_back(1);
            vector<vector<int>> res = ex.permuteUnique(t);
            Assert::AreEqual(1, (int)res.size());
        }
    };
}