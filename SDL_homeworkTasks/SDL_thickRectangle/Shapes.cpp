#include "Shapes.h"


void Shapes::drawThickRectangle(SDL_Renderer* renderer, int posX, int posY, int layers , int width, int height) {
	

	
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	
	
	for (int i = 0; i < layers; i++)
	{
		SDL_Rect outline = { posX + i, posY + i,
		width - (2 * i), height - (2 * i) };
		SDL_RenderDrawRect(renderer, &outline);
	}
}