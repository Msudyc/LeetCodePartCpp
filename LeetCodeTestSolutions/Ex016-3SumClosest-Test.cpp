#include "CppUnitTest.h"
#include "Ex016-3SumClosest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(ExSampleTest)
    {
    public:

        TEST_METHOD(Ex016_Test_threeSumClosest)
        {
            Ex16 ex;
            vector<int> v;
            v.push_back(-1);
            v.push_back(2);
            v.push_back(1);
            v.push_back(-4);
            Assert::AreEqual(2, ex.threeSumClosest(v, 1));
            v.clear();
            v.push_back(0);
            v.push_back(2);
            v.push_back(1);
            v.push_back(-3);
            Assert::AreEqual(0, ex.threeSumClosest(v, 1));
        }

        TEST_METHOD(Ex016_Test_threeSumClosest1)
        {
            Ex16 ex;
            vector<int> v;
            v.push_back(-1);
            v.push_back(2);
            v.push_back(1);
            Assert::AreEqual(2, ex.threeSumClosest(v, 5));
        }

        TEST_METHOD(Ex016_Test_threeSumClosest2)
        {
            Ex16 ex;
            vector<int> v;
            v.push_back(-1);
            v.push_back(2);
            Assert::AreEqual(0, ex.threeSumClosest(v, 5));
        }
    };
}