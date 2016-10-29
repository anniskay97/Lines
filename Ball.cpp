#include "Ball.h"
#include <random>



   
	Ball::Ball()
	{
		//Ball::~Ball();
	}


	Ball::~Ball()
	{
	}
	int Ball::Action()
	{
		return 0;
	}
	int Ball::GetFlag()
	{
		return 0;
	}

	
	void Ball::Move(int x, int y)
	{
	}
	void Ball::Check_Path(int x1, int x2, int y1, int y2)
	{
	}
	int Ball::BallC()
	{

		int C = rand() % 7 + 1;
		return C;
	}

