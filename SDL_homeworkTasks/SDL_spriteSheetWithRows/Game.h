#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	bool running;
	bool end = false;
	int currentFrame;
	int currentRow;
	int counter = 0;
};