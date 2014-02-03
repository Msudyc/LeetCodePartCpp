#include "CppUnitTest.h"
#include "Ex113-PathSumII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex113Test)
    {
    public:

        TEST_METHOD(Ex113_Test_pathSum)
        {
            Ex113 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            vector<vector<int>> res = ex.pathSum(&root, 8);
            Assert::AreEqual(1, (int)res.size());
        }

        TEST_METHOD(Ex113_Test_pathSum1)
        {
            Ex113 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5), ll(6);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr; l.left = &ll;
            vector<vector<int>> res = ex.pathSum(&root, 9);
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex113_Test_pathSum2)
        {
            Ex113 ex;
            TreeNode root(1), l(2), r(3), rl(4), rr(5);
            root.left = &l; root.right = &r;
            r.left = &rl; r.right = &rr;
            vector<vector<int>> res = ex.pathSum(&root, 10);
            Assert::AreEqual(0, (int)res.size());
        }
    };
}