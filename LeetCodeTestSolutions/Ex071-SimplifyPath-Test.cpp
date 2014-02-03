#include "CppUnitTest.h"
#include "Ex071-SimplifyPath.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex71Test)
    {
    public:

        TEST_METHOD(Ex071_Test_simplifyPath)
        {
            Ex71 ex;
            Assert::AreEqual(string("/home"), ex.simplifyPath("/home/"));
        }

        TEST_METHOD(Ex071_Test_simplifyPath1)
        {
            Ex71 ex;
            Assert::AreEqual(string("/c"), ex.simplifyPath("/a/./b/../../c/"));
        }

        TEST_METHOD(Ex071_Test_simplifyPath2)
        {
            Ex71 ex;
            Assert::AreEqual(string("/home/foo"), ex.simplifyPath("/home//foo/"));
        }

        TEST_METHOD(Ex071_Test_simplifyPath3)
        {
            Ex71 ex;
            Assert::AreEqual(string("/home"), ex.simplifyPath("/home"));
        }
    };
}