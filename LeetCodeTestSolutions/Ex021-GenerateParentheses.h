#include <vector>
#include <string>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex21
    {
    public:
        vector<string> generateParenthesis(int n);
        void generate(int l, int r, string s, vector<string> &res);
    };
}