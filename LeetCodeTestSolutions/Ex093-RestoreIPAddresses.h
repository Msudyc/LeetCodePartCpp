#include <vector>
#include <string>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex93
    {
    public:
        vector<string> restoreIpAddresses(string s);
        void getRes(string s, string r, vector<string> &res, int k);
        bool valid(string s);
    };
}