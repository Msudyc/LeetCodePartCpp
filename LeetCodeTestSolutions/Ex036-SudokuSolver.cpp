/*
Write a program to solve a Sudoku puzzle by filling the 
empty cells. Empty cells are indicated by the character
'.'.

You may assume that there will be only one unique solution. 

class Solution {
public:
    void solveSudoku(vector<vector<char> > &board) {
        
    }
};
*/

#include "Ex036-SudokuSolver.h"

namespace LeetCodeTestSolutions
{
    void Ex36::solveSudoku(vector<vector<char> > &board)
    {
        solveSudokudfs(board);
    }

    bool Ex36::solveSudokudfs(vector<vector<char> > &board)
    {
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                if(board[i][j] == '.')
                {
                    for(int k = 1; k <= 9; k++)
                    {
                        board[i][j] = '0' + k;
                        if(isValid(board,i,j) && solveSudokudfs(board))
                            return true;
                        board[i][j] = '.';
                    }
                    
                    return false;
                }
            
        return true;
    }

    bool Ex36::isValid(vector<vector<char> > &board, int a, int b) 
    {
        for(int i = 0; i < 9; i++) 
            if(i != a && board[i][b] == board[a][b]) return false;
        for(int j = 0; j < 9; j++)
            if(j != b && board[a][j] == board[a][b]) return false;
        int x = a/3 * 3, y = b/3 * 3;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j< 3; j++)
                if(x+i != a && y+j != b && board[x+i][y+j] == board[a][b])
                    return false;
        return true;
    }
}