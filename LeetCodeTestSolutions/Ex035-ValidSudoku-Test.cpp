#include "CppUnitTest.h"
#include "Ex035-ValidSudoku.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex35Test)
    {
    public:

        TEST_METHOD(Ex035_Test_isValidSudoku)
        {
            Ex35 ex;
            vector<vector<char> > board(9, vector<char>(9, '2'));
            Assert::IsFalse(ex.isValidSudoku(board));
        }

        TEST_METHOD(Ex035_Test_isValidSudoku1)
        {
            Ex35 ex;
            vector<vector<char> > board(9, vector<char>(9, '.'));
            Assert::IsTrue(ex.isValidSudoku(board));
        }

        TEST_METHOD(Ex035_Test_isValidSudoku2)
        {
            Ex35 ex;
            vector<vector<char> > board;
            vector<char> row1;
            row1.push_back('.');  row1.push_back('8'); row1.push_back('7');
            row1.push_back('6');  row1.push_back('5'); row1.push_back('4');
            row1.push_back('3');  row1.push_back('2'); row1.push_back('1');
            board.push_back(row1);

            vector<char> row2;
            row2.push_back('2');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            board.push_back(row2);

            vector<char> row3;
            row3.push_back('3');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            board.push_back(row3);

            vector<char> row4;
            row4.push_back('4');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            board.push_back(row4);

            vector<char> row5;
            row5.push_back('5');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            board.push_back(row5);

            vector<char> row6;
            row6.push_back('6');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            board.push_back(row6);

            vector<char> row7;
            row7.push_back('7');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            board.push_back(row7);

            vector<char> row8;
            row8.push_back('8');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            board.push_back(row8);

            vector<char> row9;
            row9.push_back('9');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            board.push_back(row9);
           
            Assert::IsTrue(ex.isValidSudoku(board));
        }

        TEST_METHOD(Ex035_Test_isValidSudoku3)
        {
            Ex35 ex;
            vector<vector<char> > board;
            vector<char> row1;
            row1.push_back('9');  row1.push_back('8'); row1.push_back('7');
            row1.push_back('6');  row1.push_back('5'); row1.push_back('4');
            row1.push_back('3');  row1.push_back('2'); row1.push_back('1');
            board.push_back(row1);

            vector<char> row2;
            row2.push_back('2');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            row2.push_back('.');  row2.push_back('.'); row2.push_back('.');
            board.push_back(row2);

            vector<char> row3;
            row3.push_back('3');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            row3.push_back('.');  row3.push_back('.'); row3.push_back('.');
            board.push_back(row3);

            vector<char> row4;
            row4.push_back('4');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            row4.push_back('.');  row4.push_back('.'); row4.push_back('.');
            board.push_back(row4);

            vector<char> row5;
            row5.push_back('5');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            row5.push_back('.');  row5.push_back('.'); row5.push_back('.');
            board.push_back(row5);

            vector<char> row6;
            row6.push_back('6');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            row6.push_back('.');  row6.push_back('.'); row6.push_back('.');
            board.push_back(row6);

            vector<char> row7;
            row7.push_back('7');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            row7.push_back('.');  row7.push_back('.'); row7.push_back('.');
            board.push_back(row7);

            vector<char> row8;
            row8.push_back('8');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            row8.push_back('.');  row8.push_back('.'); row8.push_back('.');
            board.push_back(row8);

            vector<char> row9;
            row9.push_back('9');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            row9.push_back('.');  row9.push_back('.'); row9.push_back('.');
            board.push_back(row9);
           
            Assert::IsFalse(ex.isValidSudoku(board));
        }
    };
}