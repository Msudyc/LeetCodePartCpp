#include "CppUnitTest.h"
#include "Ex081-SearchinRotatedSortedArrayII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex81Test)
    {
    public:

        TEST_METHOD(Ex081_Test_search)
        {
            Ex81 ex;
            int t[] = {7,7,8,9,9,1,1,2,3,3,4,4,5};
            Assert::IsTrue(ex.search(t, 13, 4));
        }

        TEST_METHOD(Ex081_Test_search1)
        {
            Ex81 ex;
            int t[] = {7,7,8,9,9,1,1,2,3,3,4,4,5};
            Assert::IsFalse(ex.search(t, 13, 6));
        }

        TEST_METHOD(Ex081_Test_search2)
        {
            Ex81 ex;
            int t[] = {7};
            Assert::IsTrue(ex.search(t, 1, 7));
        }

        TEST_METHOD(Ex081_Test_search3)
        {
            Ex81 ex;
            int t[] = {7};
            Assert::IsFalse(ex.search(t, 1, 4));
        }
    };
}