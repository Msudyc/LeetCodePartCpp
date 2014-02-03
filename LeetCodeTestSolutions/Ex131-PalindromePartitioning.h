#include <vector>
#include <string>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex131
    {
    public:
        vector<vector<string>> partition(string s);
        void find(string s, int st, vector<string> &r, vector<vector<string> > &res);
        bool valid(string &str, int st, int ed);
    };
}