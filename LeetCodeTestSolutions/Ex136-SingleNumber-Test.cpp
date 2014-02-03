#include "CppUnitTest.h"
#include "Ex136-SingleNumber.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex136Test)
    {
    public:

        TEST_METHOD(Ex136_Test_singleNumber)
        {
            Ex136 ex;
            int t[] = {1 ,3, 2, 4, 2, 1, 3};
            Assert::AreEqual(4, ex.singleNumber(t, 7));
        }

        TEST_METHOD(Ex136_Test_singleNumber1)
        {
            Ex136 ex;
            int t[] = {1};
            Assert::AreEqual(1, ex.singleNumber(t, 1));
        }
    };
}