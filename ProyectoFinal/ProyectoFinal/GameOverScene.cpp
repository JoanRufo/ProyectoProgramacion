#include "GameOverScene.h"



GameOverScene::GameOverScene()
{
}


GameOverScene::~GameOverScene()
{
}

void GameOverScene::init()
{
	gameOver = mResourceManager->loadAndGetGraphicID("Imagenes/GameOver.png");
}

void GameOverScene::update()
{

	if (Controles::getInstance()->teclasPulsadas[7] == true)
	{
		SceneManager::getInstance()->changeScene(MENU);
	}



	
}

void GameOverScene::render()
{
	mVideo->renderGraphic(gameOver, 0, 0, 1240, 720);
}
