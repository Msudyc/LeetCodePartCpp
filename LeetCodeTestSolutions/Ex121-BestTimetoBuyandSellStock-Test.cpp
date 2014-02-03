#include "CppUnitTest.h"
#include "Ex121-BestTimetoBuyandSellStock.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex121Test)
    {
    public:

        TEST_METHOD(Ex121_Test_maxProfit)
        {
            Ex121 ex;
            int row0[] = {1, 4, 3, 2, 6, 7, 4, 8, 9, 2};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(8, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex121_Test_maxProfit1)
        {
            Ex121 ex;
            int row0[] = {1};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(0, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex121_Test_maxProfit2)
        {
            Ex121 ex;
            int row0[] = {1, 4};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(3, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex121_Test_maxProfit3)
        {
            Ex121 ex;
            int row0[] = {1, 4, 0, 2};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(3, ex.maxProfit(r0));
        }
    };
}