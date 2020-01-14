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
 * FUNCTION GetPlayers
 * ____________________________________________________________________________
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the
 * X token.
 * playerO will always contain the name of the player that is using the
 * O token.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                playerX = Player X’s name
 * 	  				player0 = Player O’s name
 * POST-CONDITIONS
 * 	  This function will return the players names through the variable
 * 	  playerX and playerO.
 ******************************************************************************/

void GetPlayers(string& playerX,   // IN & OUT - player X’s name
                string& playerO)   // IN & OUT - player O’s name
{
	cin.ignore(1000,'\n');
	cout << "Enter First Player's Name: ";
	getline(cin, playerX);
	if(playerO != "computer")
	{
	cout << "Enter Second Player's Name";
	getline(cin, playerO);
	}
}
