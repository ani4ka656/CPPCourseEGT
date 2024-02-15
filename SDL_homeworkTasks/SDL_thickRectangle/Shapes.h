#pragma once
#include "Game.h"

class Shapes
{
public:
	/*static means we don't need an instance of class object to call the function*/
	static void drawThickRectangle(SDL_Renderer* renderer, int posX, int posY, int layers, int width, int height);


};

