/*******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Multi-Dimensional Array - Tic Tac Toe
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 10/11/19
 *****************************************************************************/
#include "TicTacHeader.h"
/******************************************************************************
 * FUNCTION GetAndCheckInp
 * ____________________________________________________________________________
 * This function will  determine which spot the user wants to play in, and must
 * type in the row and column they would like to occupy. The function will
 * obtain the input and verify that the row and column are within range and
 * the spot is not taken.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               boardAr[][3] = tic tac toe board
 * 	  			   token   = The token of the current player (X or O)
 * 	  			   playerX = Player X’s name
 * 	  			   player0 = Player O’s name
 *
 *
 * POST-CONDITIONS
 * 	  This function will return the players names through the variables
 * 	  playerX and playerO.
 *
 ******************************************************************************/
void GetAndCheckInp(char boardAr[][3],// IN & OUT & CALC - The game board
		char token,       // CALC - The token of the current
		                   //        player (X or O)
		string playerX,   // IN & OUT - player X’s name
		string playerO)   // IN & OUT - player O’s name
{
	int row; 		// IN - Row chosen by player to occupy
	int col; 		// IN - Column chosen by player to occupy
	const int NUM_COLS = 3;
	const int NUM_ROWS = 3;
	bool valid = false; // Boolean Expression
	do
	{
		// Prompts player to type in which space they want to enter
		if(token == 'X')
		{
			cout << playerX << ", your turn!" << endl;
			cout << "\nPlease enter row and column: ";
			cin >> row >> col;
		}
		else if(token == 'O' && playerO == "computer")
		{
			row = (rand() % 3 + 1);
			col = (rand() % 3 + 1);

		}
		else if(token == 'O' && playerO != "computer")
		{
			cout << playerO << ", your turn!" << endl;
			cout << "\nPlease enter row and column: ";
			cin >> row >> col;
		}
		// Decrements row and col as the location displayed on the
		// board starts at [1][1] instead of [0][0]
		row--;
		col--;
		//will make sure the computer chooses a valid choice
		if(token == 'O' && playerO == "computer")
		{
			if((row > 3 - 1 || row < 0)&& (col > 3 - 1 || col < 0))
			{
				valid = false;
			}
			else if((row > 3 - 1 || row < 0))
			{
				valid = false;
			}
			else if((col > 3 - 1 || col < 0))
			{
				valid = false;
			}
			else if(boardAr[row][col] != ' ')
			{
				valid = false;
			}
			else if(boardAr[row][col] == ' ')
			{
				valid = true;
			}
		}
		else
		{
			//will make sure the user chooses a valid choice
			if((row > NUM_ROWS - 1 || row < 0) && (col > NUM_COLS - 1 || col < 0))
			{
				cout << "\nRow and column are invalid, please try again."
						"\n\n";
			}
			else if(row > NUM_ROWS - 1 || row < 0)
			{
				cout << "invalid row, try again"<< endl;
			}
			else if(col > NUM_COLS - 1 || col < 0)
			{
				cout << "invalid column, try again" << endl;
			}
			else if(!isspace(boardAr[row][col]))
			{
				cout << "spot is taken, try again" << endl;
			}
			else
			{
				valid = true;
			}
		}
	}
	while(!valid);
	boardAr[row][col] = token;
	if(playerO != "computer")
	{
		cin.ignore(1000,'\n');
	}
}
