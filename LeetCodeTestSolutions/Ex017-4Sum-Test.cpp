#include "CppUnitTest.h"
#include "Ex017-4Sum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex17Test)
    {
    public:

        TEST_METHOD(Ex017_Test_fourSum)
        {
            Ex17 ex;
            vector<int> v;
            v.push_back(-2);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(2);
            vector<vector<int>> r = ex.fourSum(v, 0);
            Assert::AreEqual(1, (int)r.size());
        }

        TEST_METHOD(Ex017_Test_fourSum1)
        {
            Ex17 ex;
            vector<int> v;
            v.push_back(-2);
            v.push_back(0);
            v.push_back(1);
            v.push_back(2);
            vector<vector<int>> r = ex.fourSum(v, 0);
            Assert::AreEqual(0, (int)r.size());
        }

        TEST_METHOD(Ex017_Test_fourSum2)
        {
            Ex17 ex;
            vector<int> v;
            v.push_back(1);
            v.push_back(0);
            v.push_back(-1);
            v.push_back(0);
            v.push_back(-2);
            v.push_back(2);
            vector<vector<int>> r = ex.fourSum(v, 0);
            Assert::AreEqual(3, (int)r.size());
        }
    };
}