#include "CppUnitTest.h"
#include "Ex036-SudokuSolver.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex36Test)
    {
    public:

        TEST_METHOD(Ex036_Test_solveSudoku)
        {
            Ex36 ex;
            vector<vector<char> > board;
            vector<char> row1;
            row1.push_back('.');  row1.push_back('.'); row1.push_back('.');
            row1.push_back('.');  row1.push_back('.'); row1.push_back('.');
            row1.push_back('.');  row1.push_back('.'); row1.push_back('1');
            board.push_back(row1);

            vector<char> row2;
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('5');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            board.push_back(row2);

            vector<char> row3;
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            board.push_back(row3);

            vector<char> row4;
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            board.push_back(row4);

            vector<char> row5;
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            board.push_back(row5);

            vector<char> row6;
            row6.push_back('7');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            board.push_back(row6);

            vector<char> row7;
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            board.push_back(row7);

            vector<char> row8;
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            board.push_back(row8);

            vector<char> row9;
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            board.push_back(row9);
           
            ex.solveSudoku(board);
            Assert::AreEqual('2', board[0][0]);
        }

        TEST_METHOD(Ex036_Test_solveSudoku1)
        {
            Ex36 ex;
            vector<vector<char> > board;
            vector<char> row1;
            row1.push_back('.');  row1.push_back('.'); row1.push_back('.');
            row1.push_back('.');  row1.push_back('.'); row1.push_back('.');
            row1.push_back('.');  row1.push_back('.'); row1.push_back('9');
            board.push_back(row1);

            vector<char> row2;
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('5');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            board.push_back(row2);

            vector<char> row3;
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            board.push_back(row3);

            vector<char> row4;
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('3');  row4.push_back('.'); row4.push_back('.');
            board.push_back(row4);

            vector<char> row5;
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            board.push_back(row5);

            vector<char> row6;
            row6.push_back('7');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            board.push_back(row6);

            vector<char> row7;
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            board.push_back(row7);

            vector<char> row8;
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            board.push_back(row8);

            vector<char> row9;
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            board.push_back(row9);
           
            ex.solveSudoku(board);
            Assert::AreEqual('1', board[0][0]);
        }
    };
}