#include "CppUnitTest.h"
#include "Ex041-TrappingRainWater.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex41Test)
    {
    public:

        TEST_METHOD(Ex041_Test_trap)
        {
            Ex41 ex;
            int A[] = {0,1,0,2,1,0,1,3,2,1,2,1};
            Assert::AreEqual(6, ex.trap(A, 12));
        }

        TEST_METHOD(Ex041_Test_trap1)
        {
            Ex41 ex;
            int A[] = {0,1};
            Assert::AreEqual(0, ex.trap(A, 2));
        }

        TEST_METHOD(Ex041_Test_trap2)
        {
            Ex41 ex;
            int A[] = {1};
            Assert::AreEqual(0, ex.trap(A, 1));
        }

        TEST_METHOD(Ex041_Test_trap3)
        {
            Ex41 ex;
            int A[] = {0,1,1,2,1};
            Assert::AreEqual(0, ex.trap(A, 5));
        }

        TEST_METHOD(Ex041_Test_trap4)
        {
            Ex41 ex;
            int A[] = {0,1,0,0,1,0};
            Assert::AreEqual(2, ex.trap(A, 6));
        }
    };
}