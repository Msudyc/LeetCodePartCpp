#include "CppUnitTest.h"
#include "Ex015-3Sum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex15Test)
    {
    public:

        TEST_METHOD(Ex015_Test_threeSum)
        {
            Ex15 ex;
            vector<int> v;
            v.push_back(-2);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(2);
            vector<vector<int>> r = ex.threeSum(v);
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex015_Test_threeSum1)
        {
            Ex15 ex;
            vector<int> v;
            v.push_back(-1);
            v.push_back(0);
            v.push_back(1);
            v.push_back(2);
            v.push_back(-1);
            v.push_back(-4);
            vector<vector<int>> r = ex.threeSum(v);
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex015_Test_threeSum2)
        {
            Ex15 ex;
            vector<int> v;
            v.push_back(-1);
            v.push_back(0);
            v.push_back(1);
            v.push_back(2);
            v.push_back(-1);
            v.push_back(-4);
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
            vector<vector<int>> r = ex.threeSum(v);
            Assert::AreEqual(3, (int)r.size());
        }
    };
}