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
				SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

				TextureManager::Instance()->loadTexture("assets/sprite2.png", "png", renderer);
				//TextureManager::Instance()->loadTexture("assets/images.png", "png1", renderer);
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
	//SDL_SetRenderDrawColor(renderer, 0xCC, 0xCC, 0xCC, 255); // grey
	SDL_RenderClear(renderer);//clear buffer

	//std::cout << currentFrame << std::endl;
	//std::cout << currentFrame << ":" << currentRow << "\n";
	//TextureManager::Instance()->drawOneFrameFromTexture("png1", 100, 0, 85, 60, currentRow, currentFrame, renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("png", 0, 0, 32, 33, currentRow, currentFrame, renderer);


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
	std::cout << "SDL_TICKS / 100 % 5:   " << int(((SDL_GetTicks() / 100) % 13)) << "\n\n";*/
	int arr[] = { 13, 8, 10, 10, 10, 6, 4, 7 }; //these are the number of sprites on each row
	
	/*this segment below is equivalent to the one below, that we are using */
	//if (SDL_GetTicks() % 100 == 0) {
	//	currentFrame = counter;
	//	counter++;
	//	if (currentFrame == arr[currentRow - 1] - 1)//if we reached the end of each row =>new row
	//	{
	//		end = true;
	//		counter = 0;
	//	}
	//	if (currentFrame == 0 && end) {
	//		currentRow++;
	//		end = false;
	//	}
	//	else if (currentRow > 8) {
	//		currentRow = 1;
	//		counter = 0;

	//	}
	//}
	currentFrame = int(((SDL_GetTicks() / 100) % arr[currentRow - 1] )); //  the number of frames of each row = arr[currentRow - 1]
	if (currentFrame == arr[currentRow - 1] - 1)//if we reached the end of each row =>new row
	{
		
		end = true;
		//std::cout << currentRow << ":" << currentFrame << std::endl;
	}
	if (currentFrame == 0 && end) {
		currentRow++; 
		end = false;
	}
	else if (currentRow > 8) {
		currentRow = 1;
	}


	
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