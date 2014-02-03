#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex79
    {
    public:
        bool exist(vector<vector<char> > &board, string word);
        bool dfs(vector<vector<char> > &board, string word, int index, int x, int y);
    };
}