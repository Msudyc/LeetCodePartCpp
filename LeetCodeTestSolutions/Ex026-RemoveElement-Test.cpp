#include "CppUnitTest.h"
#include "Ex026-RemoveElement.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(ExSampleTest)
    {
    public:

        TEST_METHOD(Ex026_Test_removeElement)
        {
            Ex26 ex;
            int t[] = {0, 1, 3, 1, 4, 5, 1, 6};
            Assert::AreEqual(5, ex.removeElement(t, 8, 1));
            Assert::AreEqual(0, t[0]);
            Assert::AreEqual(3, t[1]);
            Assert::AreEqual(4, t[2]);
            Assert::AreEqual(5, t[3]);
            Assert::AreEqual(6, t[4]);
        }

        TEST_METHOD(Ex026_Test_removeElement1)
        {
            Ex26 ex;
            int t[] = {0, 1, 2, 3, 4, 5, 6, 7};
            Assert::AreEqual(8, ex.removeElement(t, 8, 9));
        }
    };
}