#include "CppUnitTest.h"
#include "Ex135-Candy.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex135Test)
    {
    public:

        TEST_METHOD(Ex135_Test_candy)
        {
            Ex135 ex;
            int row0[] = {1, 4, 1, 2};
            vector<int> rating (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(6, ex.candy(rating));
        }

        TEST_METHOD(Ex135_Test_candy1)
        {
            Ex135 ex;
            int row0[] = {1, 4};
            vector<int> rating (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(3, ex.candy(rating));
        }

        TEST_METHOD(Ex135_Test_candy2)
        {
            Ex135 ex;
            int row0[] = {1};
            vector<int> rating (row0, row0 + sizeof(row0)/sizeof(int));
            Assert::AreEqual(1, ex.candy(rating));
        }
    };
}