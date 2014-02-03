#include "CppUnitTest.h"
#include "Ex074-Searcha2DMatrix.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex74Test)
    {
    public:

        TEST_METHOD(Ex074_Test_searchMatrix)
        {
            Ex74 ex;
            vector<vector<int>> t;
            int row0[] = {1, 2, 3};
            int row1[] = {5, 7, 9};
            int row2[] = {10, 13, 15};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::IsTrue(ex.searchMatrix(t, 9));
        }

        TEST_METHOD(Ex074_Test_searchMatrix1)
        {
            Ex74 ex;
            vector<vector<int>> t;
            int row0[] = {1, 2, 3};
            int row1[] = {5, 7, 9};
            int row2[] = {10, 13, 15};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            Assert::IsFalse(ex.searchMatrix(t, 11));
        }
    };
}