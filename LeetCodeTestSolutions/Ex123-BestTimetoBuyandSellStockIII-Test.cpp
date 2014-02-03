#include "CppUnitTest.h"
#include "Ex123-BestTimetoBuyandSellStockIII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex123Test)
    {
    public:

        TEST_METHOD(Ex123_Test_maxProfit)
        {
            Ex123 ex;
            int row0[] = {1, 4, 3, 2, 6, 7, 4, 8, 9, 2};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(11, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex123_Test_maxProfit1)
        {
            Ex123 ex;
            int row0[] = {1};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(0, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex123_Test_maxProfit2)
        {
            Ex123 ex;
            int row0[] = {1, 4};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(3, ex.maxProfit(r0));
        }

        TEST_METHOD(Ex123_Test_maxProfit3)
        {
            Ex123 ex;
            int row0[] = {1, 4, 0, 2};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(5, ex.maxProfit(r0));
        }
    };
}