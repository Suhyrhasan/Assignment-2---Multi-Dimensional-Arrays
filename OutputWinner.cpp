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
 * FUNCTION OutputWinner
 * ____________________________________________________________________________
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This
 * function does not return anything as it simply outputs the appropriate
 * message to the screen.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               whoWon = represents the winner or a value indicating a tied game.
		           playerX = player X’s name
		           playerO = player O’x name
 *
 * POST-CONDITIONS
 * 	  This function will output the winner's name.
 ******************************************************************************/
void OutputWinner(char whoWon, 	   // IN - represents the winner or a value
		                          //       indicating a tied game.
		          string playerX, // OUT - player X’s name
		          string playerO) // OUT - player O’x name
{
	// If winner is playerX, playerO, or tied, will output this message accordingly
	if((whoWon == 'X') || (whoWon == 'O') || (whoWon == 'T'))
	{
		if(whoWon == 'X')
		{
			cout << "YAY!! The winner is " << playerX << "!!" << endl;
		}
		else if(whoWon == 'O')
		{
			cout << "YAY!! The winner is " << playerO << "!!" << endl;

		}
		else if(whoWon == 'T')
		{
			cout << "It's a TIE!\n\n";
		}
	}
}
