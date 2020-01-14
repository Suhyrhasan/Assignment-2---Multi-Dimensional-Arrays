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
 * FUNCTION InitBoard
 * ____________________________________________________________________________
 * This function initializes each spot in the board to a space ' '.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               boardAr[][3] = tic tac toe board
 *
 * POST-CONDITIONS
 * 	  This function will return nothing
 *************************************************************************/
void InitBoard(char boardAr[][3]) // OUT - tic tac toe board
{
	int row;
	int col;

	// Initializes board to blank spaces
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 3; col++)
		{
			boardAr[row][col] = ' ';
		}
	}
}
