#include "CppUnitTest.h"
#include "Ex150-EvaluateReversePolishNotation.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex150Test)
    {
    public:

        TEST_METHOD(Ex150_Test_evalRPN)
        {
            Ex150 ex;
            vector<string> t;
            t.push_back("2"); 
            t.push_back("1"); 
            t.push_back("+"); 
            t.push_back("3"); 
            t.push_back("*"); 
            Assert::AreEqual(9, ex.evalRPN(t));
        }

        TEST_METHOD(Ex150_Test_evalRPN1)
        {
            Ex150 ex;
            vector<string> t;
            t.push_back("4"); 
            t.push_back("13"); 
            t.push_back("5"); 
            t.push_back("/"); 
            t.push_back("+"); 
            Assert::AreEqual(6, ex.evalRPN(t));
        }
    };
}