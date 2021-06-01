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


	mEnemigo1->setPersonaje(personaje);
	mEnemigo2->setPersonaje(personaje);
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
	mEnemigo2->update();


	if (idHabitacion == 2) {

		
		mEnemigo1->movEnemigo();


	}

	else if (idHabitacion == 4) {
	
	
		mEnemigo2->movEnemigo();
	
	
	
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

	if (mEnemigo1->vidas >= 0 && mEnemigo2->vidas1 >= 0 && mEnemigo2->vidas2 >= 0 && mEnemigo3->vidas >= 0 && mEnemigoFinal->vidas >= 0) {

		if (personaje->Posx <= mEnemigo1->posX1 + 0.3 && personaje->Posx >= mEnemigo1->posX1 - 0.3 && personaje->Posy <= mEnemigo1->posY1 + 0.3 && personaje->Posy >= mEnemigo1->posY1 - 0.3 && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1->posX1 = 600;
			mEnemigo1->posY1 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
		if (personaje->Posx <= mEnemigo1->posX2 + 0.3 && personaje->Posx >= mEnemigo1->posX2 - 0.3 && personaje->Posy <= mEnemigo1->posY2 + 0.3 && personaje->Posy >= mEnemigo1->posY2 - 0.3 && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1->posX2 = 500;
			mEnemigo1->posY2 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
		if (personaje->Posx <= mEnemigo1->posX3 + 0.3 && personaje->Posx >= mEnemigo1->posX3 - 0.3 && personaje->Posy <= mEnemigo1->posY3 + 0.3 && personaje->Posy >= mEnemigo1->posY3 - 0.3 && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1->posX3 = 400;
			mEnemigo1->posY3 = 200;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}
		if (personaje->Posx <= mEnemigo1->posX4 + 0.3 && personaje->Posx >= mEnemigo1->posX4 - 0.3 && personaje->Posy <= mEnemigo1->posY4 + 0.3 && personaje->Posy >= mEnemigo1->posY4 - 0.3 && idHabitacion == 2) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo1->posX4 = 200;
			mEnemigo1->posY4 = 550;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigo2->posX + 0.3 && personaje->Posx >= mEnemigo2->posX - 0.3 && personaje->Posy <= mEnemigo2->posY + 0.3 && personaje->Posy >= mEnemigo2->posY - 0.3 && idHabitacion == 4) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo2->posX = 600;
			mEnemigo2->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);



		}

		else if (personaje->Posx <= mEnemigo2->posX2 + 0.3 && personaje->Posx >= mEnemigo2->posX2 - 0.3 && personaje->Posy <= mEnemigo2->posY2 + 0.3 && personaje->Posy >= mEnemigo2->posY2 - 0.3 && idHabitacion == 4) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo2->posX2 = 400;
			mEnemigo2->posY2 = 500;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigo3->posX + 0.3 && personaje->Posx >= mEnemigo3->posX - 0.3 && personaje->Posy <= mEnemigo3->posY + 0.3 && personaje->Posy >= mEnemigo3->posY - 0.3 && idHabitacion == 3) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigo3->posX = 600;
			mEnemigo3->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX + 0.3 && personaje->Posx >= mEnemigoFinal->posX - 0.3 && personaje->Posy <= mEnemigoFinal->posY + 0.3 && personaje->Posy >= mEnemigoFinal->posY - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX = 600;
			mEnemigoFinal->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX1 + 0.3 && personaje->Posx >= mEnemigoFinal->posX1 - 0.3 && personaje->Posy <= mEnemigoFinal->posY1 + 0.3 && personaje->Posy >= mEnemigoFinal->posY1 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX1 = 600;
			mEnemigoFinal->posY1 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX2 + 0.3 && personaje->Posx >= mEnemigoFinal->posX2 - 0.3 && personaje->Posy <= mEnemigoFinal->posY2 + 0.3 && personaje->Posy >= mEnemigoFinal->posY2 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX2 = 600;
			mEnemigoFinal->posY2 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX3 + 0.3 && personaje->Posx >= mEnemigoFinal->posX3 - 0.3 && personaje->Posy <= mEnemigoFinal->posY3 + 0.3 && personaje->Posy >= mEnemigoFinal->posY3 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX = 600;
			mEnemigoFinal->posY = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX4 + 0.3 && personaje->Posx >= mEnemigoFinal->posX4 - 0.3 && personaje->Posy <= mEnemigoFinal->posY4 + 0.3 && personaje->Posy >= mEnemigoFinal->posY4 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX4 = 600;
			mEnemigoFinal->posY4 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX5 + 0.3 && personaje->Posx >= mEnemigoFinal->posX5 - 0.3 && personaje->Posy <= mEnemigoFinal->posY5 + 0.3 && personaje->Posy >= mEnemigoFinal->posY5 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX5 = 600;
			mEnemigoFinal->posY5 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX6 + 0.3 && personaje->Posx >= mEnemigoFinal->posX6 - 0.3 && personaje->Posy <= mEnemigoFinal->posY6 + 0.3 && personaje->Posy >= mEnemigoFinal->posY6 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX6 = 600;
			mEnemigoFinal->posY6 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX7 + 0.3 && personaje->Posx >= mEnemigoFinal->posX7 - 0.3 && personaje->Posy <= mEnemigoFinal->posY7 + 0.3 && personaje->Posy >= mEnemigoFinal->posY7 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX7 = 600;
			mEnemigoFinal->posY7 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX8 + 0.3 && personaje->Posx >= mEnemigoFinal->posX8 - 0.3 && personaje->Posy <= mEnemigoFinal->posY8 + 0.3 && personaje->Posy >= mEnemigoFinal->posY8 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX8 = 600;
			mEnemigoFinal->posY8 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX9 + 0.3 && personaje->Posx >= mEnemigoFinal->posX9 - 0.3 && personaje->Posy <= mEnemigoFinal->posY9 + 0.3 && personaje->Posy >= mEnemigoFinal->posY9 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX7 = 600;
			mEnemigoFinal->posY7 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		else if (personaje->Posx <= mEnemigoFinal->posX10 + 0.3 && personaje->Posx >= mEnemigoFinal->posX10 - 0.3 && personaje->Posy <= mEnemigoFinal->posY10 + 0.3 && personaje->Posy >= mEnemigoFinal->posY10 - 0.3 && idHabitacion == 5) {


			personaje->Posx = 600;
			personaje->Posy = 300;


			idHabitacion = 1;



			mEnemigoFinal->posX10 = 600;
			mEnemigoFinal->posY10 = 300;



			SceneManager::getInstance()->changeScene(GAMEOVER);

		}

		if (mBala->balaX <= mEnemigo1->posX1 + 0.3 && mBala->balaX >= mEnemigo1->posX1 - 0.3 && mBala->balaY <= mEnemigo1->posY1 + 0.3 && mBala->balaY >= mEnemigo1->posY1 - 0.3) {

			mEnemigo1->vidas--;

			if (mEnemigo1->vidas == 0) {

				mEnemigo1->estoyVivo = false;

			}
		}

		if (mBala->balaX <= mEnemigo2->posX + 0.3 && mBala->balaX >= mEnemigo2->posX - 0.3 && mBala->balaY <= mEnemigo2->posY + 0.3 && mBala->balaY >= mEnemigo2->posY - 0.3) {

			mEnemigo2->vidas1--;

			if (mEnemigo2->vidas1 == 0) {

				mEnemigo2->estoyVivo = false;

			}

		}

		if (mBala->balaX <= mEnemigo2->posX2 + 0.3 && mBala->balaX >= mEnemigo2->posX2 - 0.3 && mBala->balaY <= mEnemigo2->posY2 + 0.3 && mBala->balaY >= mEnemigo2->posY2 - 0.3) {

			mEnemigo2->vidas2--;

			if (mEnemigo2->vidas2 == 0) {

				mEnemigo2->estoyVivo2 = false;

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
		mEnemigo1->render();
	
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
		if (mEnemigo2->estoyVivo == true) {
			mEnemigo2->render();
		}
		
		
		
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

GameScene * GameScene::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new GameScene();
	}
	return pInstance;
}


