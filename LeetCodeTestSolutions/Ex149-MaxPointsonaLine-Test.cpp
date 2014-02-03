#include "CppUnitTest.h"
#include "Ex149-MaxPointsonaLine.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex149Test)
    {
    public:

        TEST_METHOD(Ex149_Test_maxPoints)
        {
            Ex149 ex;
            vector<Point> t;
            t.push_back(Point(1, 1)); t.push_back(Point(1, 2));
            t.push_back(Point(2, 2)); t.push_back(Point(2, 3));
            t.push_back(Point(3, 3)); t.push_back(Point(3, 4));
            t.push_back(Point(4, 4)); t.push_back(Point(4, 5));
            Assert::AreEqual(4, ex.maxPoints(t));
        }

        TEST_METHOD(Ex149_Test_maxPoints1)
        {
            Ex149 ex;
            vector<Point> t;
            t.push_back(Point(1, 1)); t.push_back(Point(2, 2));
            t.push_back(Point(3, 3)); t.push_back(Point(4, 4));
            Assert::AreEqual(4, ex.maxPoints(t));
        }
    };
}