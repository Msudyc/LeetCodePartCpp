#include "CppUnitTest.h"
#include "Ex073-SetMatrixZeroes.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex73Test)
    {
    public:

        TEST_METHOD(Ex073_Test_setZeroes)
        {
            Ex73 ex;
            vector<vector<int>> t;
            int row0[] = {1, 0, 6};
            int row1[] = {2, 1, 3};
            int row2[] = {4, 0, 5};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            ex.setZeroes(t);
            Assert::AreEqual(0, t[0][0]);
            Assert::AreEqual(0, t[2][2]);
        }

        TEST_METHOD(Ex073_Test_setZeroes1)
        {
            Ex73 ex;
            vector<vector<int>> t;
            int row0[] = {1, 0, 6, 1};
            int row1[] = {2, 1, 3, 3};
            int row2[] = {4, 0, 5, 5};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r1 (row1, row1 + sizeof(row1)/sizeof(int));
            vector<int> r2 (row2, row2 + sizeof(row2)/sizeof(int));
            t.push_back(r0); t.push_back(r1); t.push_back(r2);
            ex.setZeroes(t);
            Assert::AreEqual(0, t[0][0]);
            Assert::AreEqual(0, t[2][3]);
        }
    };
}