#include "CppUnitTest.h"
#include "Ex084-LargestRectangleinHistogram.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex84Test)
    {
    public:

        TEST_METHOD(Ex084_Test_largestRectangleArea)
        {
            Ex84 ex;
            int row0[] = {2, 3, 5, 8, 4, 3};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(15, ex.largestRectangleArea(t));
        }

        TEST_METHOD(Ex084_Test_largestRectangleArea1)
        {
            Ex84 ex;
            int row0[] = {2, 3};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(4, ex.largestRectangleArea(t));
        }

        TEST_METHOD(Ex084_Test_largestRectangleArea2)
        {
            Ex84 ex;
            int row0[] = {2};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(2, ex.largestRectangleArea(t));
        }

        TEST_METHOD(Ex084_Test_largestRectangleArea3)
        {
            Ex84 ex;
            int row0[] = {2, 3, 5};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(6, ex.largestRectangleArea(t));
        }

        TEST_METHOD(Ex084_Test_largestRectangleArea4)
        {
            Ex84 ex;
            int row0[] = {1, 1};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(2, ex.largestRectangleArea(t));
        }
    };
}