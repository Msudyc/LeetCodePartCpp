#include "CppUnitTest.h"
#include "Ex065-AddBinary.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex65Test)
    {
    public:

        TEST_METHOD(Ex065_Test_addBinary)
        {
            Ex65 ex;
            Assert::AreEqual(string("101010110"), ex.addBinary("11111111", "1010111"));
        }

        TEST_METHOD(Ex065_Test_addBinary1)
        {
            Ex65 ex;
            Assert::AreEqual(string("10"), ex.addBinary("1", "1"));
        }

        TEST_METHOD(Ex065_Test_addBinary2)
        {
            Ex65 ex;
            Assert::AreEqual(string("0"), ex.addBinary("0", "0"));
        }

        TEST_METHOD(Ex065_Test_addBinary3)
        {
            Ex65 ex;
            Assert::AreEqual(string("1"), ex.addBinary("1", "0"));
        }
    };
}