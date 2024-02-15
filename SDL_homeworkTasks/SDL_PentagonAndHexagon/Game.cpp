#include "Game.h"
#include <iostream>
int c = 0;
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);


			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}
void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF); //white and the last valu i the opacity
//	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // black
	//SDL_SetRenderDrawColor(renderer, 0xCC, 0xCC, 0xCC, 255); // grey
	SDL_RenderClear(renderer);//clear buffer
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	/*drawing Pentagon*/
	SDL_SetRenderDrawColor(renderer, 45, 80, 30, 0xFF);

	Shapes::drawPentagon(renderer, ww / 2, wh / 2, 180);
	/*drawing hexagon*/
	SDL_SetRenderDrawColor(renderer, 45, 80, 30, 0xFF);

	Shapes::drawHexagon(renderer, ww / 2 + 20, wh / 2 + 20, 200);
	
	
	
	
	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}

void Game::update() {

	/*std::cout << "SDL_TICKS          :   " << SDL_GetTicks() << "\n";
	std::cout << "SDL_TICKS / 100	 :   " << int((SDL_GetTicks() / 100)) << "\n";
	std::cout << "SDL_TICKS / 100 % 5:   " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";
	currentFrame = int(((SDL_GetTicks() / 100) % 5)); //% 5 for 5 frames //if the first is greater it is even slower
	/*if (currentFrame == 4)currentRow += 1;
	std::cout << currentRow << "is the row" << "\n";*/
}
bool Game::isRunning() {
	return Game::running;
}
void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
	Game::currentRow = 1;
}
Game::~Game() {

}