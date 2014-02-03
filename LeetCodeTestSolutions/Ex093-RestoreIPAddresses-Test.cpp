#include "CppUnitTest.h"
#include "Ex093-RestoreIPAddresses.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex93Test)
    {
    public:

        TEST_METHOD(Ex093_Test_restoreIpAddresses)
        {
            Ex93 ex;
            vector<string> r = ex.restoreIpAddresses("25525511135");
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex093_Test_restoreIpAddresses1)
        {
            Ex93 ex;
            vector<string> r = ex.restoreIpAddresses("26525511135");
            Assert::AreEqual(0, (int)r.size());
        }

        TEST_METHOD(Ex093_Test_restoreIpAddresses2)
        {
            Ex93 ex;
            vector<string> r = ex.restoreIpAddresses("11125511135");
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex093_Test_restoreIpAddresses3)
        {
            Ex93 ex;
            vector<string> r = ex.restoreIpAddresses("5525511135");
            Assert::AreEqual(2, (int)r.size());
        }
    };
}