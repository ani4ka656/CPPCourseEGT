#include "Game.h"
#include <iostream>
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


				TextureManager::Instance()->loadTexture("assets/pic2.bmp", "bmp", renderer);
				int ww, wh;
				SDL_GetWindowSize(window, &ww, &wh);
				destRect.w = 184;
				destRect.h = 158;
				destRect.x = (ww / 2) - (destRect.w / 2);
				destRect.y = (wh / 2) - (destRect.h / 2);


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
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF); //white and the last value is the opacity
	SDL_RenderClear(renderer);//clear buffer
	
	TextureManager::Instance()->drawTexture("bmp", destRect.x,
		destRect.y, destRect.w, destRect.h, renderer);
	
	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		case SDL_KEYDOWN: {
			//std::cout << "key button down\n";
			if (event.key.keysym.sym == SDLK_LEFT) {
				destRect.x--;
			}
			if (event.key.keysym.sym == SDLK_RIGHT) {
				destRect.x++;
			}
			if (event.key.keysym.sym == SDLK_UP) {
				destRect.y--;
			}
			if (event.key.keysym.sym == SDLK_DOWN) {
				destRect.y++;
			}
		}; break;
		case SDL_MOUSEBUTTONDOWN: {
			
			int msx, msy;
			//std::cout << "mouse button down\n";
			if (event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&msx, &msy);
				mouseDownX = msx;
				mouseDownY = msy;
				destRect.x = mouseDownX - destRect.w / 2;
				destRect.y = mouseDownY - destRect.h / 2;
			}
		}; break;
		default: break;
		}
	}
}

void Game::update() {


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
	Game::destRect = { 0, 0, 0, 0 };
	Game::mouseDownX = 0;
	Game::mouseDownY = 0;

}
Game::~Game() {
	delete window;
	delete renderer;
}