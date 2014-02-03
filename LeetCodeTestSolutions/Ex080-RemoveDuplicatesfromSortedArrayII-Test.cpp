#include "CppUnitTest.h"
#include "Ex080-RemoveDuplicatesfromSortedArrayII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex80Test)
    {
    public:

        TEST_METHOD(Ex080_Test_removeDuplicates)
        {
            Ex80 ex;
            int t[] = {1,1,1,2,2,3};
            Assert::AreEqual(5, ex.removeDuplicates(t, 6));
        }

        TEST_METHOD(Ex080_Test_removeDuplicates1)
        {
            Ex80 ex;
            int t[] = {1,1,2,2,3};
            Assert::AreEqual(5, ex.removeDuplicates(t, 5));
        }

        TEST_METHOD(Ex080_Test_removeDuplicates2)
        {
            Ex80 ex;
            int t[] = {1,1,1,1,1,1,2,2,3};
            Assert::AreEqual(5, ex.removeDuplicates(t, 9));
        }

        TEST_METHOD(Ex080_Test_removeDuplicates3)
        {
            Ex80 ex;
            int t[] = {1,2,3};
            Assert::AreEqual(3, ex.removeDuplicates(t, 3));
        }
    };
}