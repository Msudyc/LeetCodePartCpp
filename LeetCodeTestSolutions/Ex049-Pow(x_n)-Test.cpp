#include "CppUnitTest.h"
#include "Ex049-Pow(x_n).h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex49Test)
    {
    public:

        TEST_METHOD(Ex049_Test_pow)
        {
            Ex49 ex;
            Assert::AreEqual(8.0, ex.pow(2.0, 3));
        }

        TEST_METHOD(Ex049_Test_pow1)
        {
            Ex49 ex;
            Assert::AreEqual(1.0, ex.pow(1.0, 3));
        }

        TEST_METHOD(Ex049_Test_pow2)
        {
            Ex49 ex;
            Assert::AreEqual(16.0, ex.pow(2.0, 4));
        }
    };
}