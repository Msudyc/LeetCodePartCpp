#include "CppUnitTest.h"
#include "Ex118-PascalsTriangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex118Test)
    {
    public:

        TEST_METHOD(Ex118_Test_generate)
        {
            Ex118 ex;
            vector<vector<int>> r = ex.generate(4);
            Assert::AreEqual(1, r[0][0]);
            Assert::AreEqual(1, r[1][0]);
            Assert::AreEqual(1, r[1][1]);
            Assert::AreEqual(1, r[2][0]);
            Assert::AreEqual(2, r[2][1]);
            Assert::AreEqual(1, r[2][2]);
            Assert::AreEqual(1, r[3][0]);
            Assert::AreEqual(3, r[3][1]);
            Assert::AreEqual(3, r[3][2]);
            Assert::AreEqual(1, r[3][3]);
        }
    };
}