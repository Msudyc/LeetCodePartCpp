#include "CppUnitTest.h"
#include "Ex045-Permutations.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex45Test)
    {
    public:

        TEST_METHOD(Ex045_Test_permute)
        {
            Ex45 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2);
            vector<vector<int>> res = ex.permute(t);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex045_Test_permute1)
        {
            Ex45 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2); t.push_back(3);
            vector<vector<int>> res = ex.permute(t);
            Assert::AreEqual(6, (int)res.size());
        }

        TEST_METHOD(Ex045_Test_permute2)
        {
            Ex45 ex;
            vector<int> t;
            t.push_back(1);
            vector<vector<int>> res = ex.permute(t);
            Assert::AreEqual(1, (int)res.size());
        }
    };
}