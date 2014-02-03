#include "CppUnitTest.h"
#include "Ex006-ZigZagConversion.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex6Test)
    {
    public:

        TEST_METHOD(Ex006_Test_convert)
        {
            Ex6 ex;
            string s = "PAYPALISHIRING";
            string r = "PAHNAPLSIIGYIR";
            Assert::AreEqual(r, ex.convert(s, 3));
        }

        TEST_METHOD(Ex006_Test_convert1)
        {
            Ex6 ex;
            string s = "PAYPALISHIRING";
            string r = "PINALSIGYAHRPI";
            Assert::AreEqual(r, ex.convert(s, 4));
        }

        TEST_METHOD(Ex006_Test_convert2)
        {
            Ex6 ex;
            string s = "";
            string r = "";
            Assert::AreEqual(r, ex.convert(s, 4));
        }

        TEST_METHOD(Ex006_Test_convert3)
        {
            Ex6 ex;
            string s = "P";
            string r = "P";
            Assert::AreEqual(r, ex.convert(s, 4));
        }
    };
}