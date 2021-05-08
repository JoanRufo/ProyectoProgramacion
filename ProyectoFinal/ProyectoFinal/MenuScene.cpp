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
	
}

void MenuScene::render()
{
	mVideo->renderGraphic(Background, 0, 0, 1240, 720);
	mVideo->renderGraphic(PlayButton, 600, 300, 400, 150);
	mVideo->renderGraphic(Background, 600, 100, 200, 80);
}


