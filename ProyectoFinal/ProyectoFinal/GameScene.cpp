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
	mHabitacion2->init();
}

void GameScene::update()
{
	
	personaje->MovimientoPersonaje();
	mEnemigo1->movEnemigo();


	if (balas->estoyViva == false) {



	}
	//CAMBIAR DE HABITACIONES
	if (personaje->Posx >= 20 && personaje->Posx <= 40) {

		if (personaje->Posy >= 300 && personaje->Posy <= 400) {

			mHabitacion2->init();
			mHabitacion2->render();
		}

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


