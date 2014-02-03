#include "CppUnitTest.h"
#include "Ex055-MergeIntervals.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex55Test)
    {
    public:

        TEST_METHOD(Ex055_Test_merge)
        {
            Ex55 ex;
            vector<Interval> t;
            t.push_back(Interval(0, 2));
            t.push_back(Interval(1, 4));
            t.push_back(Interval(5, 7));
            vector<Interval> r = ex.merge(t);
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex055_Test_merge1)
        {
            Ex55 ex;
            vector<Interval> t;
            t.push_back(Interval(0, 2));
            vector<Interval> r = ex.merge(t);
            Assert::AreEqual(1, (int)r.size());
        }

        TEST_METHOD(Ex055_Test_merge2)
        {
            Ex55 ex;
            vector<Interval> t;
            t.push_back(Interval(0, 2));
            t.push_back(Interval(1, 4));
            t.push_back(Interval(4, 7));
            vector<Interval> r = ex.merge(t);
            Assert::AreEqual(1, (int)r.size());
        }
    };
}