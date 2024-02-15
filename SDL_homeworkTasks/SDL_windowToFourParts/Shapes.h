#pragma once
#include "Game.h"
class Shapes
{
public:
	/*static means we don't need an instance of class object to call the function*/
	static void drawCircle(SDL_Renderer * renderer, int centerX, int centerY, int radius);
};

