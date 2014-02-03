#include "CppUnitTest.h"
#include "Ex050-N-Queens.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex50Test)
    {
    public:

        TEST_METHOD(Ex050_Test_solveNQueens)
        {
            Ex50 ex;
            vector<vector<string>> res = ex.solveNQueens(4);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex050_Test_solveNQueens1)
        {
            Ex50 ex;
            vector<vector<string>> res = ex.solveNQueens(2);
            Assert::AreEqual(0, (int)res.size());
        }

        TEST_METHOD(Ex050_Test_solveNQueens2)
        {
            Ex50 ex;
            vector<vector<string>> res = ex.solveNQueens(3);
            Assert::AreEqual(0, (int)res.size());
        }

        TEST_METHOD(Ex050_Test_solveNQueens3)
        {
            Ex50 ex;
            vector<vector<string>> res = ex.solveNQueens(5);
            Assert::AreEqual(10, (int)res.size());
        }
    };
}