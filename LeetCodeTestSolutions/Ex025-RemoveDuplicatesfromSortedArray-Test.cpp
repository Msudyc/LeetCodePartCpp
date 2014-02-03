#include "CppUnitTest.h"
#include "Ex025-RemoveDuplicatesfromSortedArray.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(ExSampleTest)
    {
    public:

        TEST_METHOD(Ex025_Test_removeDuplicates)
        {
            Ex25 ex;
            int t[] = {1, 1, 2};
            Assert::AreEqual(2, ex.removeDuplicates(t, 3));
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(2, t[1]);
        }

        TEST_METHOD(Ex025_Test_removeDuplicates1)
        {
            Ex25 ex;
            int t[] = {1, 2, 2, 3, 4, 5, 6, 6, 6};
            Assert::AreEqual(6, ex.removeDuplicates(t, 9));
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(2, t[1]);
            Assert::AreEqual(3, t[2]);
            Assert::AreEqual(4, t[3]);
            Assert::AreEqual(5, t[4]);
            Assert::AreEqual(6, t[5]);
        }

        TEST_METHOD(Ex025_Test_removeDuplicates2)
        {
            Ex25 ex;
            int t[] = {1};
            Assert::AreEqual(1, ex.removeDuplicates(t, 1));
            Assert::AreEqual(1, t[0]);
        }

        TEST_METHOD(Ex025_Test_removeDuplicates3)
        {
            Ex25 ex;
            int t[] = {1, 2};
            Assert::AreEqual(2, ex.removeDuplicates(t, 2));
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(2, t[1]);
        }

        TEST_METHOD(Ex025_Test_removeDuplicates4)
        {
            Ex25 ex;
            int t[] = {1, 1};
            Assert::AreEqual(1, ex.removeDuplicates(t, 2));
            Assert::AreEqual(1, t[0]);
        }
    };
}