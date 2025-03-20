#include <iostream>
#include <string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initializeGameBoard(string gameboard[ROWS][COLS]);
void printCurrentBoard(string gameboard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameboard[ROWS][COLS]);
bool isBoardFull(string gameboard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameboard[ROWS][COLS]);
string getWinner(string gameboard[ROWS][COLS]);

int main()
{

	runGame();

	return 0;
}


void initializeGameBoard(string gameboard[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			gameboard[i][j] = " ";
		}
	}
}

void printCurrentBoard(string gameboard[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << gameboard[i][j];
			if (j < 2)
			{
				cout << " | " << endl;
			}
		}
		if (i < 2)
		{
			cout << "- - - - -" << endl;
		}
	}
}

void getUserInput(bool xTurn, string gameboard[ROWS][COLS])
{
	int row, col;

	while (true) 
	{
		cout << "It's " << (xTurn ? "X" : "O") << "'s turn." << endl;
		cout << "Enter row and column (0-2) separated by a space: ";
		cin >> row >> col;

		if (row < 0 || row >= ROWS || col < 0 || col >= COLS)
		{
			cout << "Invalid input! Row and column must be between 0 and 2. Try again." << endl;
			continue;
		}

		if (gameboard[row][col] != " ")
		{
			cout << "Cell already occupied! Try again." << endl;
			continue; 
		}

		gameboard[row][col] = xTurn ? "X" : "O";
		break; 
	}
}


bool isBoardFull(string gameboard[ROWS][COLS])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (gameboard[i][j] != " ")
			{
				return false;
			}
			else {
				cout << "Game ended in a tie!" << endl;
				return true;
			}
		}
	}
}

bool cellAlreadyOccupied(int row, int col, string gameboard[ROWS][COLS])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row;j++)
		{
			if (gameboard[i][j] != " ")
			{
				return true;
			}
		}
	}
}


string getWinner(string gameboard[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		if (gameboard[i][0] == gameboard[i][1] && gameboard[i][1] == gameboard[i][2] && gameboard[i][0] != " ")
		{
			return gameboard[i][0]; 
		}
	}

	for (int i = 0; i < COLS; i++)
	{
		if (gameboard[0][i] == gameboard[1][i] && gameboard[1][i] == gameboard[2][i] && gameboard[0][i] != " ")
		{
			return gameboard[0][i]; 
		}
	}

	if (gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2] && gameboard[0][0] != " ")
	{
		return gameboard[0][0]; 
	}


	if (gameboard[0][2] == gameboard[1][1] && gameboard[1][1] == gameboard[2][0] && gameboard[0][2] != " ")
	{
		return gameboard[0][2]; 
	}

	return " "; 
}

void runGame()
{
	string gameboard[ROWS][COLS];
	initializeGameBoard(gameboard);

	bool xTurn = true;

	while (true)
	{
		printCurrentBoard(gameboard);
		getUserInput(xTurn, gameboard);

		string winner = getWinner(gameboard);
		if (winner != " ")
		{
			printCurrentBoard(gameboard);
			cout << "The winner is: " << winner << endl;
			return;
		}


		if (isBoardFull(gameboard))
		{
			printCurrentBoard(gameboard);
			cout << "Game result in a tie!" << endl;
			return;
		}

		xTurn = !xTurn;

	}

}