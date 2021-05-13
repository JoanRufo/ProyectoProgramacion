#include "GameScene.h"



GameScene::GameScene()
{

	
}


GameScene::~GameScene()
{
}

void GameScene::init()
{
	mHabitacion1->init();
	personaje->init();
	mEnemigo1->init();
	mEnemigo2->init();
	puerta->init();
}

void GameScene::update()
{
	personaje->MovimientoPersonaje();




	// HACER IF PARA GAMEOVER
	//SceneManager::getInstance()->changeScene(GAMEOVER);
}

void GameScene::render()
{
	mHabitacion1->render();
	personaje->render();
	mEnemigo1->render();
	puerta->render();
}


