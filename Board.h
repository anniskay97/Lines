#pragma once
#include "Ball.h"
#include "Ball_Color.h"

class Board
{
private:
	int tern;
public:
	friend class Ball;
	friend class Ball_Color;


	Ball* board[6][6];
	Board();
	~Board();
	
	void Generate();
	void Click(int x, int y);
	void Check_Lines();
	void Draw();
	void Score();
	void Pregenerate();


};

