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
	mEnemigo1A->init();
	mEnemigo1B->init();
	mEnemigo1C->init();
	mEnemigo1D->init();
	mEnemigo2A->init();
	mEnemigo2B->init();
	mEnemigo3->init();
	mEnemigoFinal->init();
	
	puertaAbajo->init();
	puertaArriba->init();
	puertaIzquierda->init();
	puertaDerecha->init();
	mHabitacion2->init();
	mHabitacion3->init();
	mHabitacion4->init();
	mHabitacionFinal->init();
	mObjetoFinal->init();


	mEnemigo1A->setPersonaje(personaje);
	mEnemigo1B->setPersonaje(personaje);
	mEnemigo1C->setPersonaje(personaje);
	mEnemigo1D->setPersonaje(personaje);
	mEnemigo2A->setPersonaje(personaje);
	mEnemigo2B->setPersonaje(personaje);
	mEnemigo3->setPersonaje(personaje);
	mEnemigoFinal->setPersonaje(personaje);





	mVectorBalas.resize(100);

	for (size_t i = 0; i < mVectorBalas.size(); i++)
	{
		mVectorBalas.at(i).init();
	}

	personaje->setpVectorBalas(&mVectorBalas);

}

void GameScene::update()
{
	
	personaje->MovimientoPersonaje();
	mEnemigo1A->update();
	mEnemigo1B->update();
	mEnemigo1C->update();
	mEnemigo1D->update();
	mEnemigo2A->update();
	mEnemigo2B->update();
	mEnemigo3->update();
	mEnemigoFinal->update();



	if (idHabitacion == 2) {

		
		mEnemigo1A->movEnemigo();
		mEnemigo1B->movEnemigo();
		mEnemigo1C->movEnemigo();
		mEnemigo1D->movEnemigo();


	}

	else if (idHabitacion == 4) {
	
	
		mEnemigo2A->movEnemigo();
		mEnemigo2B->movEnemigo();
	
	
	
	}
	
	else if (idHabitacion == 3) {


		mEnemigo3->movEnemigo();



	}
	else if (idHabitacion == 5) {

		mEnemigoFinal->movEnemigo();
	}



	for (size_t i = 0; i < mVectorBalas.size(); i++)
	{
		mVectorBalas.at(i).update();

	}
	


	/*if (balas->estoyViva == false) {

		// ELIMINAR BALA?¿?¿?¿¿?¿?¿?¡

	}*/

	//CAMBIAR DE HABITACIONES

	if (idHabitacion == 1) {

		if (personaje->Posx >= 20 && personaje->Posx <= 40) {

			if (personaje->Posy >= 250 && personaje->Posy <= 350) {

				idHabitacion = 2;
				personaje->Posx = 1100;
				personaje->Posy = 300;

			}
		}

		 if (personaje->Posx >= 540 && personaje->Posx <= 640) {

			if (personaje->Posy >= 0 && personaje->Posy <= 30) {


				idHabitacion = 3;
				personaje->Posx = 600;
				personaje->Posy = 600;
		
			}
		}

		 if (personaje->Posx >= 1140 && personaje->Posx <= 1240) {

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

		 if (personaje->Posx >= 540 && personaje->Posx <= 640) {

			if (personaje->Posy >= 0 && personaje->Posy <= 40) {


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



	//GAMEOVER

	
	if (mEnemigo1A->estoyVivo == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo1A->posX1, mEnemigo1A->posY1, mEnemigo1A->width, mEnemigo1A->height) == true && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1A->posX1 = 600;
			mEnemigo1A->posY1 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigo1B->estoyVivo2 == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo1B->posX1, mEnemigo1B->posY1, mEnemigo1B->width, mEnemigo1B->height) == true && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1B->posX1 = 500;
			mEnemigo1B->posY1 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigo1C->estoyVivo3 == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo1C->posX1, mEnemigo1C->posY1, mEnemigo1C->width, mEnemigo1C->height) == true && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1C->posX1 = 400;
			mEnemigo1C->posY1 = 200;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigo1D->estoyVivo4 == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo1D->posX1, mEnemigo1D->posY1, mEnemigo1D->width, mEnemigo1D->height) == true && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1D->posX1 = 200;
			mEnemigo1D->posY1 = 550;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigo2A->estoyVivo == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo2A->posX, mEnemigo2A->posY, mEnemigo2A->width, mEnemigo2A->height) == true && idHabitacion == 4) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo2A->posX = 600;
			mEnemigo2A->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);



		}
	}
	if (mEnemigo2B->estoyVivo2 == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo2B->posX, mEnemigo2B->posY, mEnemigo2B->width, mEnemigo2B->height) == true && idHabitacion == 4) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo2B->posX = 400;
			mEnemigo2B->posY = 500;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigo3->estoyVivo == true) {
		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigo3->posX, mEnemigo3->posY, mEnemigo3->width, mEnemigo3->height) == true && idHabitacion == 3) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo3->posX = 600;
			mEnemigo3->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}
	if (mEnemigoFinal->estoyVivo == true) {

		if (detectarColisiones(personaje->Posx, personaje->Posy, personaje->width, personaje->height, mEnemigoFinal->posX, mEnemigoFinal->posY, mEnemigoFinal->width, mEnemigoFinal->height) == true && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX = 600;
			mEnemigoFinal->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
	}

		for (size_t i = 0; i < mVectorBalas.size(); i++)
		{
			if (mVectorBalas.at(i).estoyViva == false) { break; }

	
			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo1A->posX1, mEnemigo1A->posY1, mEnemigo1A->width, mEnemigo1A->height) == true) {

				mEnemigo1A->vidas--;

				if (mEnemigo1A->vidas == 0) {

					mEnemigo1A->estoyVivo = false;

				}
			}

			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo1B->posX1, mEnemigo1B->posY1, mEnemigo1B->width, mEnemigo1B->height) == true) {

				mEnemigo1B->vidas--;

				if (mEnemigo1B->vidas == 0) {

					mEnemigo1B->estoyVivo = false;

				}
			}

			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo1C->posX1, mEnemigo1C->posY1, mEnemigo1C->width, mEnemigo1C->height) == true) {

				mEnemigo1C->vidas--;

				if (mEnemigo1C->vidas == 0) {

					mEnemigo1C->estoyVivo = false;

				}
			}

			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo1D->posX1, mEnemigo1D->posY1, mEnemigo1D->width, mEnemigo1D->height) == true) {

				mEnemigo1D->vidas--;

				if (mEnemigo1D->vidas == 0) {

					mEnemigo1D->estoyVivo = false;

				}
			}

			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo2A->posX, mEnemigo2A->posY, mEnemigo2A->width, mEnemigo2A->height) == true) {

				mEnemigo2A->vidas1--;

				if (mEnemigo2A->vidas1 == 0) {

					mEnemigo2A->estoyVivo = false;

				}

			}


			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo2B->posX, mEnemigo2B->posY, mEnemigo2B->width, mEnemigo2B->height) == true) {

				mEnemigo2B->vidas1--;

				if (mEnemigo2B->vidas1 == 0) {

					mEnemigo2B->estoyVivo = false;

				}

			}

			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigo3->posX, mEnemigo3->posY, mEnemigo3->width, mEnemigo3->height) == true) {

				mEnemigo3->vidas--;

				if (mEnemigo3->vidas == 0) {

					mEnemigo3->estoyVivo = false;

				}
			}


			if (detectarColisiones(mVectorBalas.at(i).balaX, mVectorBalas.at(i).balaY, mVectorBalas.at(i).width, mVectorBalas.at(i).height, mEnemigoFinal->posX, mEnemigoFinal->posY, mEnemigoFinal->width, mEnemigoFinal->height) == true) {

				mEnemigoFinal->vidas--;

				if (mEnemigoFinal->vidas == 0) {

					mEnemigoFinal->estoyVivo = false;

				}
			}

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
		mEnemigo1A->render();
		mEnemigo1B->render();
		mEnemigo1C->render();
		mEnemigo1D->render();
	
	}

	else if (idHabitacion == 3) {

		mHabitacion3->render();
		puertaAbajo->render();
		puertaArriba->render();
		mEnemigo3->render();
	}

	else if (idHabitacion == 4) {

		mHabitacion4->render();
		puertaIzquierda->render();
		mEnemigo2A->render();
		mEnemigo2B->render();
		
		
		
	}

	else if (idHabitacion == 5) {

		mHabitacionFinal->render();
		puertaAbajo->render();
		mObjetoFinal->render();
		mEnemigoFinal->render();
	}


	for (size_t i = 0; i < mVectorBalas.size(); i++)
	{
		mVectorBalas.at(i).render();

	}
	
	personaje->render();
	
	
}

bool GameScene::detectarColisiones(float aX, float aY, float aW, float aH, float bX, float bY, float bW, float bH)
{

	if (aX < bX + bW &&
		aX + aW > bX &&
		aY < bY + bH &&
		aY + aH >bY) {
	
				
		return true;
	}

	return false;

}

GameScene * GameScene::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new GameScene();
	}
	return pInstance;
}


