#include "CppUnitTest.h"
#include "Ex137-SingleNumberII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex137Test)
    {
    public:

        TEST_METHOD(Ex137_Test_singleNumber)
        {
            Ex137 ex;
            int t[] = {1,3,2,3,2,1,4,2,1,3};
            Assert::AreEqual(4, ex.singleNumber(t, 10));
        }

        TEST_METHOD(Ex137_Test_singleNumber1)
        {
            Ex137 ex;
            int t[] = {1};
            Assert::AreEqual(1, ex.singleNumber(t, 1));
        }
    };
}