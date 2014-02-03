#include "CppUnitTest.h"
#include "Ex061-UniquePaths.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex61Test)
    {
    public:

        TEST_METHOD(Ex061_Test_uniquePaths)
        {
            Ex61 ex;
            Assert::AreEqual(2, ex.uniquePaths(2, 2));
            Assert::AreEqual(28, ex.uniquePaths(3, 7));
        }

        TEST_METHOD(Ex061_Test_uniquePaths1)
        {
            Ex61 ex;
            Assert::AreEqual(3, ex.uniquePaths(3, 2));
        }

        TEST_METHOD(Ex061_Test_uniquePaths2)
        {
            Ex61 ex;
            Assert::AreEqual(1, ex.uniquePaths(1, 2));
        }

        TEST_METHOD(Ex061_Test_uniquePaths3)
        {
            Ex61 ex;
            Assert::AreEqual(1, ex.uniquePaths(1, 1));
        }
    };
}