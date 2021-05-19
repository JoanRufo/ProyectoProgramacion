#include "MenuScene.h"

MenuScene::MenuScene()
{
	
}


MenuScene::~MenuScene()
{
}

void MenuScene::init()
{
	Background = mResourceManager->loadAndGetGraphicID("Imagenes/Menu2.png");
	Botones = mResourceManager->loadAndGetGraphicID("Imagenes/Botones.png");
	Tip = mResourceManager->loadAndGetGraphicID("Imagenes/Tip.png");

	

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
	mVideo->renderGraphic(Botones, 0, 0, 1240, 720);
	mVideo->renderGraphic(Tip, 400,550, 430, 150);
	
}






