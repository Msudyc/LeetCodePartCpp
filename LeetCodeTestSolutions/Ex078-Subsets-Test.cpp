#include "CppUnitTest.h"
#include "Ex078-Subsets.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex78Test)
    {
    public:

        TEST_METHOD(Ex078_Test_subsets)
        {
            Ex78 ex;
            vector<int> t; t.push_back(1); t.push_back(2); t.push_back(3);
            vector<vector<int> > ret = ex.subsets(t);
            Assert::AreEqual(8, (int)ret.size());
        }

        TEST_METHOD(Ex078_Test_subsets1)
        {
            Ex78 ex;
            vector<int> t;
            vector<vector<int> > ret = ex.subsets(t);
            Assert::AreEqual(1, (int)ret.size());
        }

        TEST_METHOD(Ex078_Test_subsets2)
        {
            Ex78 ex;
            vector<int> t; t.push_back(1);
            vector<vector<int> > ret = ex.subsets(t);
            Assert::AreEqual(2, (int)ret.size());
        }

        TEST_METHOD(Ex078_Test_subsets3)
        {
            Ex78 ex;
            vector<int> t; 
            t.push_back(1); t.push_back(2); 
            t.push_back(3); t.push_back(4);
            vector<vector<int> > ret = ex.subsets(t);
            Assert::AreEqual(16, (int)ret.size());
        }
    };
}