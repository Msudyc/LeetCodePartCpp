#include "CppUnitTest.h"
#include "Ex133-CloneGraph.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex133Test)
    {
    public:

        TEST_METHOD(Ex133_Test_cloneGraph)
        {
            Ex133 ex;
            UndirectedGraphNode t0(0), t1(1), t2(2);
            t0.neighbors.push_back(&t1); t0.neighbors.push_back(&t2);
            t1.neighbors.push_back(&t0); t1.neighbors.push_back(&t2);
            t2.neighbors.push_back(&t0); t2.neighbors.push_back(&t1); t2.neighbors.push_back(&t2);

            UndirectedGraphNode *r = ex.cloneGraph(&t0);
            Assert::AreEqual(0, r->label);
            Assert::AreEqual(2, (int)r->neighbors.size());

            UndirectedGraphNode *r1 = r->neighbors[0];
            Assert::AreEqual(1, r1->label);
            Assert::AreEqual(2, (int)r1->neighbors.size());

            UndirectedGraphNode *r2 = r->neighbors[1];
            Assert::AreEqual(2, r2->label);
            Assert::AreEqual(3, (int)r2->neighbors.size());
        }
    };
}