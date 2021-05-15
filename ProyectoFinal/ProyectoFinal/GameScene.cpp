#include "GameScene.h"

GameScene* GameScene::pInstance = NULL;



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


	if (balas->estoyViva == false) {



	}




	//PAUSA
	/*if (Controles::getInstance()->teclasPulsadas[8] == true) {

		SceneManager::getInstance()->changeScene(PAUSE);
	}*/
	


}

void GameScene::render()
{
	mHabitacion1->render();
	personaje->render();
	mEnemigo1->render();
	puerta->render();
}

GameScene * GameScene::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new GameScene();
	}
	return pInstance;
}


