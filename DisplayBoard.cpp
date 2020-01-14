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
 * FUNCTION DisplayBoard
 * ____________________________________________________________________________
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                boardAr[][3] = tic tac toe board
 * POST-CONDITIONS
 * 	  This function will output the current state of the board
 ******************************************************************************/
void DisplayBoard(const char boardAr[][3])
{
	int row;	// Declares the variable for the row of the space
	int col;	// Declares the variable for the column of the space

	// Clears screen
	system("cls");
	// Outputs the board as seen by user
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	// Displays the tic-tac-toe board
	for (row = 0; row < 3; row++)
	{
		cout << setw(7) << "[" << row+1 << "][1] | " << "[" << row+1;
		cout << "][2] | " << "[" << row+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;

		// When token is assigned to a certain row and col, will display
		// the token being played to that space
		for (col = 0; col < 3; col++)
		{
			switch(col)
			{
			case 0: cout << row + 1 << setw(9) << boardAr[row][col];
			cout << setw(4) << "|";
			break;
			case 1: cout << setw(4) << boardAr[row][col];
			cout << setw(5) << "|";
			break;
			case 2: cout << setw(4) << boardAr[row][col] << endl;
			break;
			default: cout <<"ERROR!\n\n";
			}
		}
		cout << setw(14)<< "|" << setw(10) << "|\n";
		// If row is not equal to 2, will output the dividing line for
		// the tic tac toe board
		if (row != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
