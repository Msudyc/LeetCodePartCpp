#include "CppUnitTest.h"
#include "Ex051-N-QueensII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex51Test)
    {
    public:

        TEST_METHOD(Ex051_Test_totalNQueens)
        {
            Ex51 ex;
            Assert::AreEqual(2, ex.totalNQueens(4));
        }

        TEST_METHOD(Ex051_Test_totalNQueens1)
        {
            Ex51 ex;
            Assert::AreEqual(0, ex.totalNQueens(3));
        }

        TEST_METHOD(Ex051_Test_totalNQueens2)
        {
            Ex51 ex;
            Assert::AreEqual(10, ex.totalNQueens(5));
        }
    };
}