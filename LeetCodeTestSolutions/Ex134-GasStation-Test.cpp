#include "CppUnitTest.h"
#include "Ex134-GasStation.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex134Test)
    {
    public:

        TEST_METHOD(Ex134_Test_canCompleteCircuit)
        {
            Ex134 ex;
            int row0[] = {1, 2, 1, 5};
            vector<int> gas (row0, row0 + sizeof(row0)/sizeof(int));
            int row1[] = {1, 2, 2, 2};
            vector<int> cost (row1, row1 + sizeof(row1)/sizeof(int));
            Assert::AreEqual(3, ex.canCompleteCircuit(gas, cost));
        }

        TEST_METHOD(Ex134_Test_canCompleteCircuit1)
        {
            Ex134 ex;
            int row0[] = {5, 2, 1, 1};
            vector<int> gas (row0, row0 + sizeof(row0)/sizeof(int));
            int row1[] = {1, 2, 2, 2};
            vector<int> cost (row1, row1 + sizeof(row1)/sizeof(int));
            Assert::AreEqual(0, ex.canCompleteCircuit(gas, cost));
        }

        TEST_METHOD(Ex134_Test_canCompleteCircuit2)
        {
            Ex134 ex;
            int row0[] = {1, 4, 1, 2};
            vector<int> gas (row0, row0 + sizeof(row0)/sizeof(int));
            int row1[] = {1, 2, 2, 2};
            vector<int> cost (row1, row1 + sizeof(row1)/sizeof(int));
            Assert::AreEqual(0, ex.canCompleteCircuit(gas, cost));
        }

        TEST_METHOD(Ex134_Test_canCompleteCircuit3)
        {
            Ex134 ex;
            int row0[] = {1, 2, 1, 2};
            vector<int> gas (row0, row0 + sizeof(row0)/sizeof(int));
            int row1[] = {1, 2, 2, 2};
            vector<int> cost (row1, row1 + sizeof(row1)/sizeof(int));
            Assert::AreEqual(-1, ex.canCompleteCircuit(gas, cost));
        }
    };
}