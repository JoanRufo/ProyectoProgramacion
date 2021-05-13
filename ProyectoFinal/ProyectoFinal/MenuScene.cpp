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
	
	if (Controles::getInstance()->teclasPulsadas[6] == true) {

		SceneManager::getInstance()->changeScene(GAME);
	}
								
}

void MenuScene::render()
{
	mVideo->renderGraphic(Background, 0, 0, 1240, 720);
	mVideo->renderGraphic(PlayButton, 430, 200, 430, 150);
	mVideo->renderGraphic(ExitButton, 430, 380, 430, 150);
}






