#include "CppUnitTest.h"
#include "Ex054-JumpGame.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex54Test)
    {
    public:

        TEST_METHOD(Ex054_Test_canJump)
        {
            Ex54 ex;
            int A[] = {2,3,1,1,4};
            Assert::IsTrue(ex.canJump(A, 5));

            int B[] = {3,2,1,0,4};
            Assert::IsFalse(ex.canJump(B, 5));
        }

        TEST_METHOD(Ex054_Test_canJump1)
        {
            Ex54 ex;
            int A[] = {2};
            Assert::IsTrue(ex.canJump(A, 1));

            int B[] = {0,2,1,0,4};
            Assert::IsFalse(ex.canJump(B, 5));
        }
    };
}