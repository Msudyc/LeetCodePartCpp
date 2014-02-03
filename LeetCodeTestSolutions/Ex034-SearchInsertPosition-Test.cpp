#include "CppUnitTest.h"
#include "Ex034-SearchInsertPosition.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex34Test)
    {
    public:

        TEST_METHOD(Ex034_Test_searchInsert)
        {
            Ex34 ex;
            int t[] = {1, 3, 5, 6};
            Assert::AreEqual(1, ex.searchInsert(t, 4, 2));
        }

        TEST_METHOD(Ex034_Test_searchInsert1)
        {
            Ex34 ex;
            int t[] = {1, 3, 5, 6};
            Assert::AreEqual(2, ex.searchInsert(t, 4, 5));
        }

        TEST_METHOD(Ex034_Test_searchInsert2)
        {
            Ex34 ex;
            int t[] = {1, 3, 5, 6};
            Assert::AreEqual(4, ex.searchInsert(t, 4, 8));
        }

        TEST_METHOD(Ex034_Test_searchInsert3)
        {
            Ex34 ex;
            int t[] = {2, 3, 5, 6};
            Assert::AreEqual(0, ex.searchInsert(t, 4, 1));
        }
    };
}