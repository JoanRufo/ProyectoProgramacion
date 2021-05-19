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
	idHabitacion = 1;


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

	if (idHabitacion == 1) {

		if (personaje->Posx >= 20 && personaje->Posx <= 40) {

			if (personaje->Posy >= 300 && personaje->Posy <= 400) {

				idHabitacion = 2;
			}

		}

	}

	else if (idHabitacion == 2) {
		
		if (personaje->Posx >= 1100 && personaje->Posx <= 1240)
		{
			if (personaje->Posy >= 300 && personaje->Posy <= 400) {
			
			
				idHabitacion = 1;
			
			}


		}
	
	
	
	}





	//PAUSA
	
	if (Controles::getInstance()->teclasPulsadas[8] == true) {

		SceneManager::getInstance()->changeScene(PAUSE);
	}
	


}

void GameScene::render()
{
	if (idHabitacion == 1) {
	
		mHabitacion1->render();
	}

	else if (idHabitacion == 2) {
	
		mHabitacion2->render();
	}
	
	
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


