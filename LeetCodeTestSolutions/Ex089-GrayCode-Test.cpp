#include "CppUnitTest.h"
#include "Ex089-GrayCode.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex89Test)
    {
    public:

        TEST_METHOD(Ex089_Test_grayCode)
        {
            Ex89 ex;
            vector<int> r = ex.grayCode(2);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(1, r[1]);
            Assert::AreEqual(3, r[2]);
            Assert::AreEqual(2, r[3]);
        }

        TEST_METHOD(Ex089_Test_grayCode1)
        {
            Ex89 ex;
            vector<int> r = ex.grayCode(1);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(1, r[1]);
        }

        TEST_METHOD(Ex089_Test_grayCode2)
        {
            Ex89 ex;
            vector<int> r = ex.grayCode(0);
            Assert::AreEqual(0, r[0]);
        }

        TEST_METHOD(Ex089_Test_grayCode3)
        {
            Ex89 ex;
            vector<int> r = ex.grayCode(3);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(1, r[1]);
            Assert::AreEqual(3, r[2]);
            Assert::AreEqual(2, r[3]);
            Assert::AreEqual(6, r[4]);
            Assert::AreEqual(7, r[5]);
            Assert::AreEqual(5, r[6]);
            Assert::AreEqual(4, r[7]);
        }
    };
}