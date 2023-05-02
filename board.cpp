#include "board.h"
#include "checker.h"

board::board()
{
	reset();
}

board::~board()
{
}

void board::reset()
{
	the_board.resize(8);
	for (int index = 0; index < the_board.size(); index++)
	{
		the_board[index].resize(8);
	}

	//Set the whole board with all ' ''s and no kings.
	for (int emptyRow = 0; emptyRow < 8; emptyRow++)
	{
		for (int emptyCol = 0; emptyCol < 8; emptyCol++)
		{
			the_board[emptyRow][emptyCol] = (new checker(' ', false, emptyRow, emptyCol));

		}
	}

	//Set the correct part of the board with red pieces
	for (int rowRed1 = 0; rowRed1 < 3; rowRed1 += 2)
	{
		for (int colRed1 = 1; colRed1 < 8; colRed1 += 2)
		{
			the_board[rowRed1][colRed1]->setColor('r');
		}
	}
	for (int rowRed2 = 1; rowRed2 < 2; rowRed2 += 2)
	{
		for (int colRed2 = 0; colRed2 < 8; colRed2 += 2)
		{
			the_board[rowRed2][colRed2]->setColor('r');
		}
	}

	//Set the correct part of the board with black pieces
	for (int rowBlack1 = 7; rowBlack1 > 3; rowBlack1 -= 2)
	{
		for (int colBlack1 = 6; colBlack1 > -1; colBlack1 -= 2)
		{
			the_board[rowBlack1][colBlack1]->setColor('b');
		}

	}
	for (int rowBlack2 = 6; rowBlack2 > 4; rowBlack2 -= 2)
	{
		for (int colBlack2 = 7; colBlack2 > -1; colBlack2 -= 2)
		{
			the_board[rowBlack2][colBlack2]->setColor('b');
		}
	}

}
void board::print()
{
	for (int row = 0; row < 8; row++)
	{
		cout << "----+---+---+---+---+---+---+----" << endl;
		for (int col = 0; col < 8; col++)
		{
			cout << "| " << the_board[row][col]->getColor() << " ";
		}
		cout << "|" << endl;
	}
	cout << "----+---+---+---+---+---+---+----" << endl;
}

void board::move(checker& Checker,int x, int y)
{
	Checker.setXLoc(x);
	Checker.setYLoc(y);
}
