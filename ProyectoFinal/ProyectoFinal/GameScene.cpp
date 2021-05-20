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
	puertaAbajo->init();
	puertaArriba->init();
	puertaIzquierda->init();
	puertaDerecha->init();
	mHabitacion2->init();
	mHabitacion3->init();
	mHabitacion4->init();
	mHabitacionFinal->init();
	mObjetoFinal->init();
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

			if (personaje->Posy >= 250 && personaje->Posy <= 350) {

				idHabitacion = 2;
				personaje->Posx = 1100;
				personaje->Posy = 300;

			}

		}

		else if (personaje->Posx >= 540 && personaje->Posx <= 640) {

			if (personaje->Posy >= 0 && personaje->Posy <= 30) {


				idHabitacion = 3;
				personaje->Posx = 600;
				personaje->Posy = 600;
		

			}
		}

		else if (personaje->Posx >= 1140 && personaje->Posx <= 1240) {

			if (personaje->Posy >= 280 && personaje->Posy <= 400) {


				idHabitacion = 4;
				personaje->Posx = 40;
				personaje->Posy = 300;

			}
		}

	}

	else if (idHabitacion == 2) {
		
		if (personaje->Posx >= 1150 && personaje->Posx <= 1240)
		{
			if (personaje->Posy >= 300 && personaje->Posy <= 400) {
			
			
				idHabitacion = 1;
				personaje->Posx = 40;
				personaje->Posy = 300;
			
			}


		}



	
	
	
	}


	else if (idHabitacion == 3) {

		if (personaje->Posx >= 580  && personaje->Posx <= 620)
		{
			if (personaje->Posy >= 600  && personaje->Posy <= 640) {


				idHabitacion = 1;
				personaje->Posx = 600;
				personaje->Posy = 50;

			}


		}

		else if (personaje->Posx >= 540 && personaje->Posx <= 640) {

			if (personaje->Posy >= 10 && personaje->Posy <= 40) {


				idHabitacion = 5;
				personaje->Posx = 600;
				personaje->Posy = 600;


			}
		}



	}



	else if (idHabitacion == 4) {

		if (personaje->Posx >= 20 && personaje->Posx <= 40) {

			if (personaje->Posy >= 250 && personaje->Posy <= 350) {

				idHabitacion = 1;
				personaje->Posx = 1130;
				personaje->Posy = 300;

			}

		}



	}


	else if (idHabitacion == 5) {

		if (personaje->Posx >= 580 && personaje->Posx <= 620)
		{
			if (personaje->Posy >= 600 && personaje->Posy <= 640) {


				idHabitacion = 3;
				personaje->Posx = 600;
				personaje->Posy = 50;

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
		puertaArriba->render();
		puertaIzquierda->render();
		puertaDerecha->render();
		
	}

	else if (idHabitacion == 2) {
	
		mHabitacion2->render();
		puertaDerecha->render();
		mEnemigo1->render();
	}

	else if (idHabitacion == 3) {

		mHabitacion3->render();
		puertaAbajo->render();
		puertaArriba->render();
	}

	else if (idHabitacion == 4) {

		mHabitacion4->render();
		puertaIzquierda->render();
	}

	else if (idHabitacion == 5) {

		mHabitacionFinal->render();
		puertaAbajo->render();
		mObjetoFinal->render();
	}


	
	
	personaje->render();
	
	
}

GameScene * GameScene::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new GameScene();
	}
	return pInstance;
}


