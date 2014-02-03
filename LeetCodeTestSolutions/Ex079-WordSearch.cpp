/*
Given a 2D board and a word, find if the word exists in 
the grid. 

The word can be constructed from letters of sequentially
adjacent cell, where "adjacent" cells are those horizontally
or vertically neighboring. The same letter cell may not be 
used more than once. 

For example,
 Given board = 
[
  ["ABCE"],
  ["SFCS"],
  ["ADEE"]
]

word = "ABCCED", -> returns true,
word = "SEE", -> returns true,
word = "ABCB", -> returns false.

*/

#include "Ex079-WordSearch.h"

namespace LeetCodeTestSolutions
{
    bool Ex79::exist(vector<vector<char> > &board, string word)
    {
        for(int i = 0; i < (int)board.size(); i++)
            for(int j = 0; j < (int)board[0].size(); j++)
                if(dfs(board, word, 0, i, j)) return true;
        return false; 
    } 
    
    bool Ex79::dfs(vector<vector<char> > &board, string word, int index, int x, int y)
    {
        if(index == (int)word.size()-1 && word.at(index) == board[x][y]) 
            return true;
        if(word.at(index) != board[x][y])
            return false;
        char tmp = board[x][y]; 
        board[x][y] = '.';
        bool b1 = false, b2 = false, b3 = false, b4 = false; 
        if(x-1 >= 0 && board[x-1][y] != '.')
            b1 = dfs(board, word, index+1, x-1, y);
        if(!b1 && y-1 >= 0 && board[x][y-1] != '.') 
            b2 = dfs(board, word, index+1, x, y-1);
        if(!b1 && !b2 && x+1 < (int)board.size() && board[x+1][y] != '.') 
            b3 = dfs(board, word, index+1, x+1, y); 
        if(!b1 && !b2 && !b3 && y+1 < (int)board[0].size() && board[x][y+1] != '.') 
            b4 = dfs(board, word, index+1, x, y+1); 
        board[x][y] = tmp;
        return b1 || b2 || b3 || b4; 
    }
}