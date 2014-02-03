#include "CppUnitTest.h"
#include "Ex075-SortColors.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex75Test)
    {
    public:

        TEST_METHOD(Ex075_Test_sortColors)
        {
            Ex75 ex;
            int t[] = {1, 2, 1, 0, 1, 0};
            ex.sortColors(t, 6);
            Assert::AreEqual(0, t[0]);
            Assert::AreEqual(0, t[1]);
            Assert::AreEqual(1, t[2]);
            Assert::AreEqual(1, t[3]);
            Assert::AreEqual(1, t[4]);
            Assert::AreEqual(2, t[5]);
        }

        TEST_METHOD(Ex075_Test_sortColors1)
        {
            Ex75 ex;
            int t[] = {1};
            ex.sortColors(t, 1);
            Assert::AreEqual(1, t[0]);
        }

        TEST_METHOD(Ex075_Test_sortColors2)
        {
            Ex75 ex;
            int t[] = {1, 2};
            ex.sortColors(t, 2);
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(2, t[1]);
        }
    };
}