#include "Ball_Color.h"
#include <random>


Ball_Color::Ball_Color()
{
	Color = rand() % 7 + 1;
}


Ball_Color::~Ball_Color()
{
}

int Ball_Color::Action()
{
		return Ball_Color::Color;
}
 
