// TextureManager.h
#pragma once
#include "Game.h"
#include <string>
#include <iostream>
#include <map>

class TextureManager {
public:

	bool loadTexture(const char* fileName, std::string id, SDL_Renderer* ren);
	void drawTexture(std::string id,
		int x, int y,
		int width, int height,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);
	void drawOneFrameFromTexture(std::string id,
		int x, int y,
		int width, int height,
		int currentRow, int currentFrame,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	static TextureManager* Instance() { // TextureManager is a singleton, only one instance allowed
		if (instance == 0) {
			instance = new TextureManager();
			return instance;
		}
		return instance;
	}
	void update(SDL_Window* window, int speed, int x, int y, SDL_Renderer* ren, int width, int height) {
		/*destRect.w = width;
		destRect.h = height;*/
		
		
	}

private:
	std::map<std::string, SDL_Texture*> textureMap;
	TextureManager() {
		instance = NULL;
		srcRect = { 0,  0, 0, 0 };
		destRect = { 0,  0, 0, 0 };
	} // TextureManager is a singleton, the constructor is a private field
	static TextureManager* instance;
	SDL_Rect srcRect;
	SDL_Rect destRect;
};

