#pragma once
#include "Ball.h"

class Ball_Color : public Ball
{
private: 
	int Color;
public:

	Ball_Color();
	~Ball_Color();
	int Action();

};

