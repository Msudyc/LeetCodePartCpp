#include "CppUnitTest.h"
#include "Ex021-GenerateParentheses.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex21Test)
    {
    public:

        TEST_METHOD(Ex021_Test_generateParenthesis)
        {
            Ex21 ex;
            vector<string> r = ex.generateParenthesis(3);
            Assert::AreEqual(5, (int)r.size());
        }

        TEST_METHOD(Ex021_Test_generateParenthesis1)
        {
            Ex21 ex;
            vector<string> r = ex.generateParenthesis(1);
            Assert::AreEqual(1, (int)r.size());
        }

        TEST_METHOD(Ex021_Test_generateParenthesis2)
        {
            Ex21 ex;
            vector<string> r = ex.generateParenthesis(2);
            Assert::AreEqual(2, (int)r.size());
        }
    };
}