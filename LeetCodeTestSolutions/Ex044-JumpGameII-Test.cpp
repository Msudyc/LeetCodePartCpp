#include "CppUnitTest.h"
#include "Ex044-JumpGameII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex44Test)
    {
    public:

        TEST_METHOD(Ex044_Test_jump)
        {
            Ex44 ex;
            int A[] = {2,3,1,1,4};
            Assert::AreEqual(2, ex.jump(A, 5));
        }

        TEST_METHOD(Ex044_Test_jump1)
        {
            Ex44 ex;
            int A[] = {1,1,1,1,1};
            Assert::AreEqual(4, ex.jump(A, 5));
        }

        TEST_METHOD(Ex044_Test_jump2)
        {
            Ex44 ex;
            int A[] = {6,3,1,1,4};
            Assert::AreEqual(1, ex.jump(A, 5));
        }

        TEST_METHOD(Ex044_Test_jump3)
        {
            Ex44 ex;
            int A[] = {2,1,1,1,4};
            Assert::AreEqual(3, ex.jump(A, 5));
        }
    };
}