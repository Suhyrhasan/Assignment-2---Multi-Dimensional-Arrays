/*******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Multi-Dimensional Array - Tic Tac Toe
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 10/11/19
 *****************************************************************************/
#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_

#include <stdlib.h> /* srand, rand */
#include <iostream> /* cin, cout */
#include <iomanip>  /* setw, setprecision */
#include <string>   /* string */
#include<cstdlib>   /* system("cls")*/
using namespace std;

string PrinterHeader(string asName, int asNum , char asType);
/******************************************************************************
* Function PrinterHeader - This function receives an assignment name, type
* 						   and number then outputs the appropriate class
* 						   heading. asType is defaulted to Lab as there
* 						   are more labs than Assignments. ==> returns
* 						   nothing - This will output the class heading.
* *****************************************************************************/

void OutputInstruct();
/******************************************************************************
* Function OutputInstruct - This function outputs instructions to the users.
*                           There are no input or output parameters for this
*                           function as it only displays text to the screen.
* *****************************************************************************/
void InitBoard(char boardAr[][3]);
/******************************************************************************
* Function InitBoard - This function initializes each spot in the board to a
*                      space ' '.
* *****************************************************************************/

void DisplayBoard(const char boardAr[][3]);
/******************************************************************************
* Function DisplayBoard - This function outputs the tic tac toe board including
*                         the tokens played in the proper format (as described
*                         below).
*          1       2        3
*       [1][1] | [1][2] | [1][3]
*              |        |
* 1            |        |
*              |        |
*      --------------------------
*       [2][1] | [2][2] | [2][3]
*              |        |
* 2            |        |
*              |        |
*      --------------------------
*       [3][1] | [3][2] | [3][3]
*              |        |
* 3            |        |
* *****************************************************************************/

void GetPlayers(string& playerX, string& playerO);
/******************************************************************************
* Function GetPlayers - This function prompts the user and gets the input for
*                       the players’ names.
* *****************************************************************************/

void GetAndCheckInp(char boardAr[][3], char token, string playerX, string playerO);
/******************************************************************************
* Function GetAndCheckInp - This function prompts the user and gets the input
*                           for the players’ names.
* *****************************************************************************/

char SwitchToken(char token);
/******************************************************************************
* Function SwitchToken - This function switches the active player.
* *****************************************************************************/

char CheckWin(const char boardAr[][3]);
/******************************************************************************
* Function CheckWin - This function checks to see if either player has run.
*                     Once it is possible for a win condition to exist, this
*                     should run after each a player makes a play.
* *****************************************************************************/

void OutputWinner(char whoWon, string playerX, string playerO);
/********************************************************************************
* Function OutputWinner - This function receives as input a character indicating
*                         which player won or if the game was a tie and outputs
*                         an appropriate message. This function does not return
*                         anything as it simply outputs the appropriate message
*                         to the screen.
* *****************************************************************************/
#endif /* TICTACHEADER_H_ */
