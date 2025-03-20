#include <iostream>
#include <string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initializeGameBoard(string (&gameboard)[ROWS][COLS]);
void printCurrentBoard(string(&gameboard)[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string(&gameboard)[ROWS][COLS]);
string getWinner(string(&gameboard)[ROWS][COLS]);
bool isBoardFull(string(&gameboard)[ROWS][COLS]);



int main()
{

	runGame();

	return 0;
}


void initializeGameBoard(string (&gameboard)[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			gameboard[i][j] = " ";  // Set all cells to empty space
		}
	}
}


void printCurrentBoard(string (&gameboard)[ROWS][COLS])
{
	cout << " " << gameboard[0][0] << "|" << gameboard[0][1] << " | " << gameboard[0][2] << endl;
	cout << "---|---|---" << endl;
	cout << " " << gameboard[1][0] << "|" << gameboard[1][1] << " | " << gameboard[1][2] << endl;
	cout << "---|---|---" << endl;
	cout << " " << gameboard[2][0] << "|" << gameboard[2][1] << " | " << gameboard[2][2] << endl;
}

bool cellAlreadyOccupied(int row, int col, string (&gameboard)[ROWS][COLS])
{
	return (gameboard[row][col] == "X" || gameboard[row][col] == "O");
}

void getUserInput(bool xTurn, string(&gameboard)[ROWS][COLS])
{
	int row, col;

	while (true)
	{
		cout << "Enter a ROW then a column (0-2) separated by space for " << (xTurn ? "X" : "O") << ": ";
		cin >> row >> col;

		// Debugging: Check input received
		cout << "DEBUG: User entered row = " << row << ", col = " << col << endl;

		if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
			cout << "Invalid input! Row and column must be between 0 and 2" << endl;
			continue;
		}

		if (cellAlreadyOccupied(row, col, gameboard)) {
			cout << "Cell already occupied, try again!" << endl;
		}
		else
		{
			gameboard[row][col] = xTurn ? "X" : "O";  // Correctly update board
			break;
		}
	}
}


string getWinner(string (&gameboard)[ROWS][COLS])
{	
	for (int i = 0; i < ROWS; i++)
	{
		if (gameboard[i][0] == gameboard[i][1] && gameboard[i][1] == gameboard[i][2] && gameboard[i][0] != " ")
		{
			return gameboard[i][0];
		}
	}

	for (int i = 0; i < COLS; i++) {
		if (gameboard[0][i] == gameboard[i][1] && gameboard[i][1] == gameboard[i][2] && gameboard[i][0] != " ")
		{
			return gameboard[i][0];
		}
	}

	if (gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2] && gameboard[0][0] != " ")
	{
		return gameboard[0][0];
	}

	if (gameboard[0][2] == gameboard[1][1] && gameboard[1][1] == gameboard[2][0] && gameboard[0][0] != " ")
	{
		return gameboard[0][0];
	}

	return " "; // in case there is no winner
}

bool isBoardFull(string (&gameboard)[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (gameboard[i][j] == " ") {
				return false;  // There's an empty space, so the board isn't full
			}
		}
	}
	return true;  // No empty spaces left, so it's a tie
}


void runGame()
{
	string gameboard[ROWS][COLS];
	bool xTurn = true;

	initializeGameBoard(gameboard);

	while (true)
	{
		printCurrentBoard(gameboard);  // Show updated board
		getUserInput(xTurn, gameboard);  // Get input from current player

		// Debugging: Print board after every move
		cout << "DEBUG: Board updated after user input:" << endl;
		printCurrentBoard(gameboard);

		// Check if there is a winner
		string winner = getWinner(gameboard);
		if (winner != " ") {
			printCurrentBoard(gameboard);
			cout << "Player " << winner << " won!" << endl;
			return;
		}

		// Check if the board is full (tie)
		if (isBoardFull(gameboard))
		{
			printCurrentBoard(gameboard);
			cout << "Game result in a tie!" << endl;
			return;
		}

		xTurn = !xTurn;  // Switch turn
	}
}
