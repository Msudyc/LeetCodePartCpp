#include "CppUnitTest.h"
#include "Ex027-ImplementstrStr.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex27Test)
    {
    public:

        TEST_METHOD(Ex027_Test_strStr)
        {
            Ex27 ex;
            char s[] ="abcdefghijklmopq";
            char t[] = "jkl";
            char * r= ex.strStr(s, t);
            Assert::AreEqual('j', *r++);
            Assert::AreEqual('k', *r++);
            Assert::AreEqual('l', *r++);
            Assert::AreEqual('m', *r++);
        }

        TEST_METHOD(Ex027_Test_strStr1)
        {
            Ex27 ex;
            char s[] ="";
            char t[] = "";
            char * r= ex.strStr(s, t);
            Assert::AreEqual('\0', *r++);
        }

        TEST_METHOD(Ex027_Test_strStr2)
        {
            Ex27 ex;
            char s[] ="abcdefghaabmopq";
            char t[] = "aab";
            char * r= ex.strStr(s, t);
            Assert::AreEqual('a', *r++);
            Assert::AreEqual('a', *r++);
            Assert::AreEqual('b', *r++);
            Assert::AreEqual('m', *r++);
        }
    };
}