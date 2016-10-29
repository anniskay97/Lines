#include "Ball.h"
#include "Ball.cpp"
#include "Board.h"
#include <random>
#include <iostream>
#include "Ball_Color.h"

using namespace std;



Board::Board()
{
	
}


Board::~Board()
{
}

void Board::Pregenerate()
{
	int i = rand() % 8 + 1;
	int j = rand() % 8 + 1;
	
	Board::board[i][j] = new Ball_Color;

		
	cout<< board[i][j]->GetFlag();

		for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
		{
			cout << board[i][j]->GetFlag()<<" ";
		}
		cout << endl;
	}
			
		
}

void Board::Generate()
{
}

void Board::Click(int x, int y)
{
}


void Board::Check_Lines()
{
}

void Board::Draw()
{

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
		{
			Board::board[i][j] = new Ball_Color();
			cout << board[i][j]->GetFlag()<<" ";
		}
		cout << endl;
	}



}

void Board::Score()
{
	cout << 2;
}

