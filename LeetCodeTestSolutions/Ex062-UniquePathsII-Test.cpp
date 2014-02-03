#include "CppUnitTest.h"
#include "Ex062-UniquePathsII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex62Test)
    {
    public:

        TEST_METHOD(Ex062_Test_uniquePathsWithObstacles)
        {
            Ex62 ex;
            vector<vector<int>> t;
            int row0[] = {0, 0, 0};
            int row1[] = {0, 1, 0};
            int row2[] = {0, 0, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::AreEqual(2, ex.uniquePathsWithObstacles(t));
        }

        TEST_METHOD(Ex062_Test_uniquePathsWithObstacles1)
        {
            Ex62 ex;
            vector<vector<int>> t;
            int row0[] = {0, 0, 0};
            int row1[] = {0, 1, 1};
            int row2[] = {0, 0, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::AreEqual(1, ex.uniquePathsWithObstacles(t));
        }

        TEST_METHOD(Ex062_Test_uniquePathsWithObstacles2)
        {
            Ex62 ex;
            vector<vector<int>> t;
            int row0[] = {0, 0, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            t.push_back(r0);
            Assert::AreEqual(1, ex.uniquePathsWithObstacles(t));
        }

        TEST_METHOD(Ex062_Test_uniquePathsWithObstacles3)
        {
            Ex62 ex;
            vector<vector<int>> t;
            int row0[] = {0, 1, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            t.push_back(r0);
            Assert::AreEqual(0, ex.uniquePathsWithObstacles(t));
        }

        TEST_METHOD(Ex062_Test_uniquePathsWithObstacles4)
        {
            Ex62 ex;
            vector<vector<int>> t;
            int row0[] = {0, 0, 0};
            int row1[] = {0, 1, 1};
            int row2[] = {0, 1, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::AreEqual(0, ex.uniquePathsWithObstacles(t));
        }
    };
}