#include "MenuScene.h"





MenuScene::MenuScene()
{
}


MenuScene::~MenuScene()
{
}

void MenuScene::init()
{
	Background = mResourceManager->loadAndGetGraphicID("Imagenes/MenuBackground.png");
	PlayButton = mResourceManager->loadAndGetGraphicID("Imagenes/Play.png");
	ExitButton = mResourceManager->loadAndGetGraphicID("Imagenes/Exit.png");


	rect.x = 430;
	rect.y = 200;
	rect.w = 400;
	rect.h = 150;



}

void MenuScene::update()
{
	
	
	// SDL_RECT DETECTAR CLICK LIMITES IMAGEN PLAY
	/*if () 
	{
	
		SceneManager::getInstance()->changeScene(GAME);
	
	}*/

	
	
}

void MenuScene::render()
{
	mVideo->renderGraphic(Background, 0, 0, 1240, 720);
	mVideo->renderGraphic(PlayButton, 430, 200, 400, 150);
	mVideo->renderGraphic(ExitButton, 530, 400, 200, 80);
}



int MenuScene::CheckClick(int x, int y, SDL_Rect * rect)
{
	/* Check X coordinate is within rectangle range */
	if (x >= rect->x && x < (rect->x + rect->w))
	{
		/* Check Y coordinate is within rectangle range */
		if (y >= rect->y && y < (rect->y + rect->h))
		{
			/* X and Y is inside the rectangle */
			SceneManager::getInstance()->changeScene(GAME);
		}
	}

	/* X or Y is outside the rectangle */
	return 0;
}


