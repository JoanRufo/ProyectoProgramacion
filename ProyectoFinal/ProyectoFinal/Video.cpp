
#include "Video.h"
#include "SDL.h"
#include "ResourceManager.h"


#define SCREEN_WIDTH 1240
#define SCREEN_HEIGHT 720




Video::Video()
{
	gWindow = NULL;
	gScreenSurface = NULL;
	SDL_Init(SDL_INIT_VIDEO);
	gWindow = SDL_CreateWindow("PROJECT", SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	gScreenSurface = SDL_GetWindowSurface(gWindow);
}


Video::~Video()
{
}

void Video::renderGraphic(int img, int posX, int posY, int width, int height)
{
	SDL_Rect r, rectAux;
	r.x = posX;
	r.y = posY;
	rectAux.h = height;
	rectAux.w = width;
	rectAux.x = 0;
	rectAux.y = 0;
	SDL_Surface *origin = ResourceManager::getInstance()->getGraphicByID(img);
	SDL_BlitSurface(origin, &rectAux, gScreenSurface, &r);

}

void Video::clearScreen(unsigned int color_key)
{
	SDL_FillRect(gScreenSurface, NULL, color_key);
}

void Video::updateScreen()
{
	SDL_UpdateWindowSurface(gWindow);
}

void Video::waitTime(int ms)
{
	SDL_Delay(ms);
}

void Video::close()
{
}






