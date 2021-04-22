#pragma once
#include "SDL.h"
#include "ResourceManager.h"
#include <iostream>


class Video
{
public:
	Video();
	~Video();
	void renderGraphic(int img, int posX, int posY, int width, int height);
	void clearScreen(unsigned int color_key);
	void updateScreen();
	void waitTime(int ms);
	void close();
	SDL_Window* gWindow;
	SDL_Surface* gScreenSurface;
	void SetRenderer(SDL_Renderer * mRenderer) { renderer = mRenderer; }
	static Video* getInstance();
private:
	SDL_Renderer * renderer;
	static Video* pInstance;
};


