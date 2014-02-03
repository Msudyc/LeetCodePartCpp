#include "CppUnitTest.h"
#include "Ex056-InsertInterval.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex56Test)
    {
    public:

        TEST_METHOD(Ex056_Test_insert)
        {
            Ex56 ex;
            vector<Interval> t;
            t.push_back(Interval(0, 2));
            t.push_back(Interval(1, 4));
            t.push_back(Interval(5, 7));
            vector<Interval> r = ex.insert(t, Interval(1, 6));
            Assert::AreEqual(1, (int)r.size());
        }

        TEST_METHOD(Ex056_Test_insert1)
        {
            Ex56 ex;
            vector<Interval> t;
            t.push_back(Interval(0, 1));
            t.push_back(Interval(2, 4));
            t.push_back(Interval(7, 9));
            vector<Interval> r = ex.insert(t, Interval(3, 7));
            Assert::AreEqual(2, (int)r.size());
        }
    };
}