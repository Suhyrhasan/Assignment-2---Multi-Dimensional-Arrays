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
 * FUNCTION SwitchToken
 * ____________________________________________________________________________
 * This function switches the active player. It takes in a parameter representing
 * the current player's token as a character value (either an X or an O) and
 *  returns the opposite.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                token = current player’s token ('X' or 'O')
 *
 * POST-CONDITIONS
 * 	  This function will the token opposite of the one in which it receives.
 ******************************************************************************/
char SwitchToken(char token) // IN - current player’s token ('X' or 'O')
{
	// If token is X, will return O
	if(toupper(token == 'X'))
	{
		token = 'O';
	}
	// If token is O, will return X
	else if(toupper(token == 'O'))
	{
		token = 'X';
	}
	return token;
}
