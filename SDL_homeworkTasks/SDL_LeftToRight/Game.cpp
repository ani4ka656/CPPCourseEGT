//Game.cpp
#include "Game.h"
#include "TextureManager.h"
#include <iostream>
int Game::increase =/*0.5*/ 1;
//int Game::x = 0;
//int Game::y = 0;
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
				SDL_SetRenderDrawColor(renderer, 94, 49, 49, 255);

				// use the TextureManager to load textures
				 TextureManager::Instance()->loadTexture("assets/pic1.jpg", "jpg", renderer);
			

			/*SDL_Surface* tempSurface = IMG_Load("assets/pic1.jpg"); //temporary variable
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);*/
				destRect.x = 0;
				destRect.y = 0;
				destRect.w = 53;
				destRect.h = 75;

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
	SDL_RenderClear(renderer);
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	destRect.y = wh / 2 - 75 / 2;
	TextureManager::Instance()->drawTexture("jpg", destRect.x, destRect.y, 53, 75, renderer/*SDL_FLIP_NONE*/);
	//SDL_RenderCopy(renderer, texture, NULL, &destRect); //draws on renderer with portion of the texture
	


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
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	if (SDL_GetTicks() % 10 == 0) {
		if (flip) {
			std::cout << increase << std::endl;
			destRect.x += increase;
		}
		else {
			std::cout << increase << std::endl;
			destRect.x -= increase; // here we subject the increase by the dectRect x coordinate
		}
		if ((destRect.x >= (ww - destRect.w + 1))) {
			std::cout << increase;
			//std::cout << "      x:" << destRect.x << std::endl;
			destRect.x = ww - destRect.w;
		//	std::cout << "      x:" << destRect.x << std::endl;
			flip = false;
		}

		if (destRect.x < 0) {
			destRect.x = 0;
			flip = true;
			increase += 1; //evetytime the object hits the x = 0 it increases speed
		}

		if (increase > 8 || increase < -8)
			increase = 1;
	}
}


void Game::clean() {
		std::cout << "Cleaning Game on Close\n";
		SDL_DestroyWindow(window);
		SDL_DestroyRenderer(renderer);
		SDL_Quit();
}
bool Game::isRunning() { //checks running based on handleEvents
	return Game::running;
}
Game::Game() {
	//initialize the main members
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::texture = NULL;
	Game::destRect = { 0, 0, 0, 0 };
	Game::flip = true;
}
Game::~Game() {
}
