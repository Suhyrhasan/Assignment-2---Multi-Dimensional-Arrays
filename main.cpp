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
 * MULTI-DIMENSIONAL ARRAY - TIC TAC TOE
 * ----------------------------------------------------------------------------
 * This program will allow two users to play the game tic-tac toe.
 * It will prompt users for a name and assign a token to each player
 * accordingly. The program will have each player take turns until one
 * player wins or there is a tie, and will output a message and ask
 * if they would like to play again.
 * ----------------------------------------------------------------------------
 *	INPUT/OUTPUT:
 *	             boardAr[row][col]: The tic tac toe game board
 *	             playerX		  : The name of the first player, X
 *	             playerO		  : The name of the second player, O
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER	   : Programmer's Name
	 * CLASS 		   : Student's Course
	 * SECTION 		   : Class Days and Times
	 * ASSIGNMENT_NUM  : Assignment Number (specific to this lab)
	 * ASSIGNMENT_NAME : Title of the assignment
	 * ------------------------------------------------------------------------
	 * USED FOR FORMATTING
	 * ------------------------------------------------------------------------
	 * ------------------------------------------------------------------------
	 * USED FOR EXECUTABLE CODE
	 * ------------------------------------------------------------------------
	 *************************************************************************/
	// OUTPUT HEADING
	cout << PrinterHeader("Tic Tac Toe", 2 , 'A');

	int option;         // IN - Menu Choice
	char message;		// IN - Input by user if they want to
	srand(time(NULL));  // Generates random number (for AI
	/**************************************************************************
	 * INPUT:  The program should provide the user with instructions on how to
	 *          lay and enter data then the program will ask the user if they
	 *          want to play or not.
	 *
	 * Example: Let's play Tic-Tac-Toe!
	 *          Instructions: Player X and Player O will take turns choosing
	 *          a spot to enter on the board. First person to get three of
	 *          their tokens in a row is the winner. Good luck!
	 *          Want to play?(y/n):
	 **************************************************************************/
	// Outputs the instructions to play the game
	OutputInstruct();
	// Asks user if they want to play
	cout << "Want to play?(y/n): ";
	cin >> message;
	cin.ignore(1000,'\n');
	message = toupper(message);
	if(message == 'Y')
	{
		/**************************************************************************
		 * Do While Loop: This loop will make sure to run the program until the
		 * 				  user enters '0' to end to loop/program.
		 *************************************************************************/
		do
		{
			// This makes sure to return all variables to it's original state
			// after each case ends.
			char boardAr[3][3];               // IN & OUT & CALC - the game board
			char token;						  // CALC - The token of the current
			                                  //        player (X or O)
			char whoWon;					  // CALC - The winner of the game
			string playerX; 				  // IN & OUT - player X’s name
			string playerO; 				  // IN & OUT - player O's name
			token = 'X';					  // Initializes token to 'X', player 1
			whoWon = ' ';					  // Initializes winner to ' '

			// Outputs the menu
			cout << "\nMAIN MENU" << endl << endl;
			cout << "Enter 1 to set Player Names" << endl;
			cout << "Enter 2 to play in Two Player Mode" << endl;
			cout << "Enter 3 to play in One Player Mode" << endl;
			cout << "Enter 0 to Exit" << endl;

			cout << "Enter an option (0 to exit): ";
			cin  >> option;
			cout << endl;

			// A switch statement
			switch(option)
			{
			/**************************************************************************
			 * Case 1 : The program should prompt the players for their names and
			 *           either assign a token to each player (X or O). Then program
			 *           will return to the main menu.
			 *************************************************************************/
			case 1:
				if(message == 'Y')
				{
					GetPlayers(playerX, playerO);
				}
				break;
				/****************************************************************************
				 * Case 2 : The program should allow the player to make their move by
				 *          specifying a row and a col. After each turn it should prompt the
				 *          player by name.Afterwards the program should output which player
				 *          won at the end of the game (by name) or if the players tied.
				 *          Then program will return to the main menu.
				 *****************************************************************************/
			case 2:
				InitBoard(boardAr);
				GetPlayers(playerX, playerO);
				do
				{
					DisplayBoard(boardAr);
					GetAndCheckInp(boardAr,token, playerX, playerO);
					// Switches token after making a move
					token = SwitchToken(token);
					// Will check if there is a win condition
					whoWon = CheckWin(boardAr);
					if((whoWon == 'X') || (whoWon == 'O') || (whoWon == 'T'))
					{
						// Outputs the winner of the game
						DisplayBoard(boardAr);
						OutputWinner(whoWon, playerX, playerO);
						break;
					}
				}while((whoWon != 'X') || (whoWon != 'O') || (whoWon != 'T'));
				break;
				/**************************************************************************
				 * Case 3: The program should allow the player to make their move by
				 *         specifying a row and a col but in case the user will play against
				 *         the computer. After each turn it should prompt the
				 *         player by name. Afterwards the program should output which player
				 *         won at the end of the game (by name) or if the players tied.
				 *         Then program will return to the main menu.
				 *************************************************************************/
			case 3:
				InitBoard(boardAr);
				playerO = "computer";
				GetPlayers(playerX, playerO);
				do
				{
					DisplayBoard(boardAr);
					GetAndCheckInp(boardAr,token, playerX, playerO);
					// Switches token after making a move
					token = SwitchToken(token);
					// Will check if there is a win condition
					whoWon = CheckWin(boardAr);
					if((whoWon == 'X') || (whoWon == 'O') || (whoWon == 'T'))
					{
						// Outputs the winner of the game
						DisplayBoard(boardAr);
						OutputWinner(whoWon, playerX, playerO);
						break;
					}
				}while((whoWon != 'X') || (whoWon != 'O') || (whoWon != 'T'));
				token = 'X';
				break;
				/**************************************************************************
				 * Case 0 - When the user inputs '0' the program will end.
				 *
				 * Case default - When the user enters an invalid number the program will
				 *                say "Invalid option!" and let them try again.
				 *************************************************************************/
			case 0:
				cout << "Exited Game" << endl;
				break;

			default:
				cout << "Invalid option!" << endl;
			}// END OF SWITCH STATEMENT
		}while(option !=0);
	}// END OF IF STATEMENT
	cout << endl;
	cout<<"Thank you for using my program."<<endl;

	return 0;
}
