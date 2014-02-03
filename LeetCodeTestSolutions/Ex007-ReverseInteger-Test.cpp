#include "CppUnitTest.h"
#include "Ex007-ReverseInteger.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex7Test)
    {
    public:

        TEST_METHOD(Ex007_Test_reverse)
        {
            Ex7 ex;
            Assert::AreEqual(0, ex.reverse(0));
            Assert::AreEqual(2, ex.reverse(2));
            Assert::AreEqual(-2, ex.reverse(-2));
            Assert::AreEqual(123, ex.reverse(321));
            Assert::AreEqual(-123, ex.reverse(-321));
            Assert::AreEqual(1, ex.reverse(100));
        }
    };
}