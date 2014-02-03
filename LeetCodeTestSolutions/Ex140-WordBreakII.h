#include <vector>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex140
    {
    public:
        vector<string> wordBreak(string s, unordered_set<string> &dict);
        void wordBreakHelper(
            string s, 
            unordered_set<string> &dict, 
            set<string> &unmatched, 
            int mn,
            int mx, 
            vector<string> &path, 
            vector<string> &res);
    };
}