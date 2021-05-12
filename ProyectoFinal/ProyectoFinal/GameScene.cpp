#include "GameScene.h"



GameScene::GameScene()
{

	
}


GameScene::~GameScene()
{
}

void GameScene::init()
{
	
	idDelGrafico = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");

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
	mVideo->renderGraphic(idDelGrafico, 0, 0, 1240, 720);
	personaje->render();
	mEnemigo1->render();
	puerta->render();
}


