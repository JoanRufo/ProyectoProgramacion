
#include "Video.h"


#define SCREEN_WIDTH 1240
#define SCREEN_HEIGHT 720


Video* Video::pInstance = NULL;
Video * Video::getInstance() { if (pInstance == NULL) { pInstance = new Video(); } return pInstance; }

Video::Video()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	int flags = IMG_INIT_JPG | IMG_INIT_PNG;
	int initted = IMG_Init(flags);
	if ((initted & flags) != flags) {
		std::cout << "Error init SDL_Image" << IMG_GetError();
	}

	gWindow = SDL_CreateWindow("Juego",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN);


	renderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
	ResourceManager::getInstance()->SetRenderer(renderer);
}


Video::~Video()
{
}

void Video::renderGraphic(int img, int posX, int posY, int width, int height)
{
	SDL_Rect r, rectAux;
	r.x = posX;
	r.y = posY;
	r.w = width;
	r.h = height;
	rectAux.h = height;
	rectAux.w = width;
	rectAux.x = 0;
	rectAux.y = 0;
	SDL_Texture *origin = ResourceManager::getInstance()->getGraphicByID(img);
	SDL_RenderCopy(renderer, origin, &rectAux, &r);

}

void Video::clearScreen(unsigned int color_key)
{
	SDL_RenderClear(renderer);
}

void Video::updateScreen()
{
	SDL_RenderPresent(renderer);
}

void Video::waitTime(int ms)
{
	SDL_Delay(ms);
}

void Video::close()
{
	SDL_Quit();
}






