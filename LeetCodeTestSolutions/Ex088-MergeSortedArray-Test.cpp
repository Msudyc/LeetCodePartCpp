#include "CppUnitTest.h"
#include "Ex088-MergeSortedArray.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex88Test)
    {
    public:

        TEST_METHOD(Ex088_Test_merge)
        {
            Ex88 ex;
            int t1[11] = {1,3,5,7,9};
            int t2[] = {2,4,6,8,10};
            ex.merge(t1, 5, t2, 5);
            Assert::AreEqual(1, t1[0]);
            Assert::AreEqual(2, t1[1]);
            Assert::AreEqual(3, t1[2]);
            Assert::AreEqual(4, t1[3]);
            Assert::AreEqual(5, t1[4]);
            Assert::AreEqual(6, t1[5]);
            Assert::AreEqual(7, t1[6]);
            Assert::AreEqual(8, t1[7]);
            Assert::AreEqual(9, t1[8]);
            Assert::AreEqual(10, t1[9]);
        }

        TEST_METHOD(Ex088_Test_merge1)
        {
            Ex88 ex;
            int t1[11] = {1,3};
            int t2[] = {2};
            ex.merge(t1, 2, t2, 1);
            Assert::AreEqual(1, t1[0]);
            Assert::AreEqual(2, t1[1]);
            Assert::AreEqual(3, t1[2]);
        }

        TEST_METHOD(Ex088_Test_merge2)
        {
            Ex88 ex;
            int t1[11] = {1};
            int t2[] = {2};
            ex.merge(t1, 1, t2, 1);
            Assert::AreEqual(1, t1[0]);
            Assert::AreEqual(2, t1[1]);
        }

        TEST_METHOD(Ex088_Test_merge3)
        {
            Ex88 ex;
            int t1[11] = {1,3,5,7,9};
            int t2[] = {2,4,6,8,10};
            ex.merge(t1, 5, t2, 0);
            Assert::AreEqual(1, t1[0]);
            Assert::AreEqual(3, t1[1]);
            Assert::AreEqual(5, t1[2]);
            Assert::AreEqual(7, t1[3]);
            Assert::AreEqual(9, t1[4]);
        }

        TEST_METHOD(Ex088_Test_merge4)
        {
            Ex88 ex;
            int t1[11] = {1,3,5,7,9};
            int t2[] = {2,4,6,8,10};
            ex.merge(t1, 0, t2, 5);
            Assert::AreEqual(2, t1[0]);
            Assert::AreEqual(4, t1[1]);
            Assert::AreEqual(6, t1[2]);
            Assert::AreEqual(8, t1[3]);
            Assert::AreEqual(10, t1[4]);
        }
    };
}