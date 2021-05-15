#include "PauseScene.h"

PauseScene::PauseScene()
{
}

PauseScene::~PauseScene()
{
}

void PauseScene::init()
{


	menu = mResourceManager->loadAndGetGraphicID("Imagenes/PauseMenu.png");

}

void PauseScene::update()
{

	if (Controles::getInstance()->teclasPulsadas[6] == true) {

		SceneManager::getInstance()->changeScene(GAME);
	}

	else if (Controles::getInstance()->teclasPulsadas[7] == true)
	{
		SceneManager::getInstance()->changeScene(MENU);
	}


}

void PauseScene::render()
{
	mVideo->renderGraphic(menu, 0, 0, 1240, 720);
}
