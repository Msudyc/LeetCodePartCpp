/*
Given a 2D board containing 'X' and 'O', capture all regions
surrounded by 'X'. A region is captured by flipping all 'O's 
into 'X's in that surrounded region . 

For example,

X X X X
X O O X
X X O X
X O X X

After running your function, the board should be: 
X X X X
X X X X
X X X X
X O X X

class Solution {
public:
    void solve(vector<vector<char>> &board) {
        
    }
};
*/

#include "Ex130-SurroundedRegions.h"

namespace LeetCodeTestSolutions
{
    void Ex130::solve(vector<vector<char>> &board)
    {
        int m = board.size();
        if(m==0) return;
        int n = board[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(i == 0 || (i == m - 1) || j == 0 || (j == n - 1))
                    mark(board, i, j);
        flip(board, 'O', 'X');
        flip(board, 'M', 'O');
    }

    void Ex130::mark(vector<vector<char> > &board, int row, int col)
    {
        if(board[row][col] != 'O') return;
        else board[row][col] = 'M';
        if(row > 0) mark(board, row - 1, col);
        if(row < (int)board.size() - 1) mark(board, row + 1, col);
        if(col > 0) mark(board, row, col - 1);
        if(col < (int)board[0].size() - 1) mark(board, row, col + 1);
    }
    
    void Ex130::flip(vector<vector<char> > &board, char from, char to)
    {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(board[i][j] == from) board[i][j] = to;
    }
}