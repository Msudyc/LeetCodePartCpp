#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex127
    {
    public:
        vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict);
        void getLadder(vector<vector<string>> &ans, unordered_map<string, vector<string>> &P, vector<string> &v, string str);
    };
}