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
 * FUNCTION OutputInstruct
 * ____________________________________________________________________________
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * screen.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will displays the instructions to the user
 ******************************************************************************/
void OutputInstruct()

{
	cout << "WELCOME TO TIC TAC TOE GAME" << endl;
	cout << "How to Play:" << endl;
	cout << "Player X and Player O will take turns choosing"
			"\na spot to enter on the board. First person to get three of"
			"\ntheir tokens in a row is the winner. Good luck! \n\n";
}
