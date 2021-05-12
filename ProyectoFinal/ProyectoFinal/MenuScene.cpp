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
}

void MenuScene::update()
{

	
	/* SDL_RECT DETECTAR CLICK LIMITES IMAGEN PLAY
	if () 
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


