#include "CppUnitTest.h"
#include "Ex068-TextJustification.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex68Test)
    {
    public:

        TEST_METHOD(Ex068_Test_fullJustify)
        {
            Ex68 ex;
            vector<string> t;
            t.push_back("this");
            t.push_back("is");
            t.push_back("a");
            t.push_back("very");
            t.push_back("good");
            t.push_back("example");
            t.push_back("of");
            t.push_back("test");
            vector<string> r = ex.fullJustify(t, 10);
            Assert::AreEqual(4, (int)r.size());
        }

        TEST_METHOD(Ex068_Test_fullJustify1)
        {
            Ex68 ex;
            vector<string> t;
            t.push_back("this");
            t.push_back("is");
            t.push_back("a");
            t.push_back("very");
            t.push_back("good");
            t.push_back("example");
            t.push_back("of");
            t.push_back("justification");
            t.push_back("you");
            t.push_back("can");
            t.push_back("see");
            vector<string> r = ex.fullJustify(t, 10);
            Assert::AreEqual(6, (int)r.size());
        }

        TEST_METHOD(Ex068_Test_fullJustify2)
        {
            Ex68 ex;
            vector<string> t;
            t.push_back("this");
            t.push_back("is");
            t.push_back("an");
            t.push_back("example");
            vector<string> r = ex.fullJustify(t, 10);
            Assert::AreEqual(2, (int)r.size());
        }
    };
}