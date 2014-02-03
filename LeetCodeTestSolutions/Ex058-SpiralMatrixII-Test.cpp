#include "CppUnitTest.h"
#include "Ex058-SpiralMatrixII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex58Test)
    {
    public:

        TEST_METHOD(Ex058_Test_generateMatrix)
        {
            Ex58 ex;
            vector<vector<int>> r = ex.generateMatrix(2);
            Assert::AreEqual(1, r[0][0]);
            Assert::AreEqual(2, r[0][1]);
            Assert::AreEqual(3, r[1][1]);
            Assert::AreEqual(4, r[1][0]);
        }

        TEST_METHOD(Ex058_Test_generateMatrix1)
        {
            Ex58 ex;
            vector<vector<int>> r = ex.generateMatrix(1);
            Assert::AreEqual(1, r[0][0]);
        }

        TEST_METHOD(Ex058_Test_generateMatrix2)
        {
            Ex58 ex;
            vector<vector<int>> r = ex.generateMatrix(3);
            Assert::AreEqual(1, r[0][0]);
            Assert::AreEqual(2, r[0][1]);
            Assert::AreEqual(3, r[0][2]);
            Assert::AreEqual(4, r[1][2]);
            Assert::AreEqual(5, r[2][2]);
            Assert::AreEqual(6, r[2][1]);
            Assert::AreEqual(7, r[2][0]);
            Assert::AreEqual(8, r[1][0]);
            Assert::AreEqual(9, r[1][1]);
        }
    };
}