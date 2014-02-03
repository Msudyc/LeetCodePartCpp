#include "CppUnitTest.h"
#include "Ex063-MinimumPathSum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex63Test)
    {
    public:

        TEST_METHOD(Ex063_Test_minPathSum)
        {
            Ex63 ex;
            vector<vector<int>> t;
            int row0[] = {0, 2, 0};
            int row1[] = {0, 1, 3};
            int row2[] = {1, 1, 0};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::AreEqual(2, ex.minPathSum(t));
        }

        TEST_METHOD(Ex063_Test_minPathSum1)
        {
            Ex63 ex;
            vector<vector<int>> t;
            int row0[] = {0, 2, 0, 1};
            int row1[] = {0, 1, 3, 2};
            int row2[] = {1, 1, 0, 3};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::AreEqual(5, ex.minPathSum(t));
        }

        TEST_METHOD(Ex063_Test_minPathSum2)
        {
            Ex63 ex;
            vector<vector<int>> t;
            int row0[] = {0, 2, 0, 1};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            t.push_back(r0);
            Assert::AreEqual(3, ex.minPathSum(t));
        }
    };
}