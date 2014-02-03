#include "CppUnitTest.h"
#include "Ex090-DecodeWays.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex90Test)
    {
    public:

        TEST_METHOD(Ex090_Test_numDecodings)
        {
            Ex90 ex;
            Assert::AreEqual(2, ex.numDecodings("12"));
        }

        TEST_METHOD(Ex090_Test_numDecodings1)
        {
            Ex90 ex;
            Assert::AreEqual(3, ex.numDecodings("123"));
        }

        TEST_METHOD(Ex090_Test_numDecodings2)
        {
            Ex90 ex;
            Assert::AreEqual(1, ex.numDecodings("5"));
        }

        TEST_METHOD(Ex090_Test_numDecodings3)
        {
            Ex90 ex;
            Assert::AreEqual(1, ex.numDecodings("567"));
        }

        TEST_METHOD(Ex090_Test_numDecodings4)
        {
            Ex90 ex;
            Assert::AreEqual(2, ex.numDecodings("2343"));
        }
    };
}