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


				//TextureManager::Instance()->loadTexture("assets/pic2.bmp", "bmp", renderer);
				TextureManager::Instance()->loadTexture("assets/pic1.jpeg", "jpeg1", renderer);
				TextureManager::Instance()->loadTexture("assets/pic2.jpeg", "jpeg2", renderer);
				TextureManager::Instance()->loadTexture("assets/pic3.jpeg", "jpeg3", renderer);
				TextureManager::Instance()->loadTexture("assets/pic4.jpeg", "jpeg4", renderer);
		

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
	
	//SDL_SetRenderDrawColor(renderer, 0xCC, 0xCC, 0xCC, 255); // grey
	SDL_RenderClear(renderer);//clear buffer
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	int quadrantWidth = ww / 2;
	int quadrantHeight = wh / 2;
	// Store the rectangle coordinates for each quadrant
	clickableRect1 = { 0, 0, quadrantWidth, quadrantHeight };
	clickableRect2 = { quadrantWidth, 0, quadrantWidth, quadrantHeight };
	clickableRect3 = { 0, quadrantHeight, quadrantWidth, quadrantHeight };
	clickableRect4 = { quadrantWidth, quadrantHeight, quadrantWidth, quadrantHeight };
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh); 
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2); 

	if (visibleTextures[0])
	TextureManager::Instance()->drawTexture("jpeg1", clickableRect1.x, clickableRect1.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[1])
	TextureManager::Instance()->drawTexture("jpeg2", clickableRect2.x, clickableRect2.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[2])
	TextureManager::Instance()->drawTexture("jpeg3", clickableRect3.x, clickableRect3.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[3])
	TextureManager::Instance()->drawTexture("jpeg4", clickableRect4.x, clickableRect4.y, quadrantWidth, quadrantHeight, renderer);
	
	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		case SDL_MOUSEBUTTONDOWN: {
			//std::cout << "mouse button down\n";
			if (event.button.button == SDL_BUTTON_LEFT) {
				int ww, wh;
				SDL_GetWindowSize(window, &ww, &wh);
				int msx, msy;
				SDL_GetMouseState(&msx, &msy);
				//std::cout << "mouse button left\n";
				int quadrantWidth = ww / 2;
				int quadrantHeight = wh / 2;
				mouseDownX = msx;
				mouseDownY = msy;
			
			
			
				if(mouseDownX > 0 && mouseDownY < wh / 2 && mouseDownX < ww / 2 && mouseDownY > 0)  {					
					std::cout << 1; // in first quadrant
					visibleTextures[0] = !visibleTextures[0];
				}
				if (mouseDownX > ww / 2 && mouseDownY < wh / 2 && mouseDownY > 0 && mouseDownX < ww ){
					std::cout << 2; // in second quadrant
					visibleTextures[1] = !visibleTextures[1];
				}
				if (mouseDownX > 0  && mouseDownY > wh / 2 && mouseDownX < ww / 2 && mouseDownY < wh){
					std::cout << 3; // in third quadrant
					visibleTextures[2] = !visibleTextures[2];
				}
				if (mouseDownX > ww / 2 && mouseDownY > wh / 2 && mouseDownX < ww && mouseDownY < wh) {
					std::cout << 4; // in forth quadrant
					visibleTextures[3] = !visibleTextures[3];
				}
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
	Game::clickableRect = { 0 , 0, 0, 0 };
	Game::clickableRect1 = { 0 , 0, 0, 0 };
	Game::clickableRect2 = { 0 , 0, 0, 0 };
	Game::clickableRect3 = { 0 , 0, 0, 0 };
	Game::clickableRect4 = { 0 , 0, 0, 0 };
	Game::mouseDownX = 0;
	Game::mouseDownY = 0;
}
Game::~Game() {
	delete window;
	delete renderer;

}