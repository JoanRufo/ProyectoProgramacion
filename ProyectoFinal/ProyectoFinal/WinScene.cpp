#include "WinScene.h"



WinScene::WinScene()
{
}


WinScene::~WinScene()
{
}

void WinScene::init()
{
	win = mResourceManager->loadAndGetGraphicID("Imagenes/WinScene.png");
}

void WinScene::upadte()
{

	if (Controles::getInstance()->teclasPulsadas[7] == true)
	{

		SceneManager::getInstance()->changeScene(MENU);

	}

}

void WinScene::render()
{
	mVideo->renderGraphic(win, 0, 0, 1240, 720);
}
