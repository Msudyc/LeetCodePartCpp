#include "CppUnitTest.h"
#include "Ex032-SearchinRotatedSortedArray.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex32Test)
    {
    public:

        TEST_METHOD(Ex032_Test_search)
        {
            Ex32 ex;
            int t[] = {4,5,6,7,0,1,2};
            Assert::AreEqual(5, ex.search(t, 7, 1));
        }

        TEST_METHOD(Ex032_Test_search1)
        {
            Ex32 ex;
            int t[] = {4,5,6,7,0,1,2};
            Assert::AreEqual(-1, ex.search(t, 7, 9));
        }

        TEST_METHOD(Ex032_Test_search2)
        {
            Ex32 ex;
            int t[] = {4};
            Assert::AreEqual(-1, ex.search(t, 1, 9));
        }

        TEST_METHOD(Ex032_Test_search3)
        {
            Ex32 ex;
            int t[] = {0};
            Assert::AreEqual(-1, ex.search(t, 0, 9));
        }
    };
}