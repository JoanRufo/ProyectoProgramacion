#include "GameOverScene.h"



GameOverScene::GameOverScene()
{
}


GameOverScene::~GameOverScene()
{
}

void GameOverScene::init()
{
	gameOver = mResourceManager->loadAndGetGraphicID("Imagenes/.png");
}

void GameOverScene::update()
{
	if (personaje->Posx && personaje->Posy == mEnemigo1->posX && mEnemigo1->posY) {

	}
}

void GameOverScene::render()
{
	mVideo->renderGraphic(gameOver, 0, 0, 1240, 720);
}
