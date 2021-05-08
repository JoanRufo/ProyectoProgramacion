#include <iostream>
#include <stdio.h>
#include "Video.h"
#include "ResourceManager.h"
#include "SceneManager.h"
#include "Controles.h"
#include "Timer.h"
#include "Personaje.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "MenuScene.h"
#include "puertas.h"


Uint32 		global_elapsed_time = 0;
bool		gameOn = true;
SceneManager	*sDirector = NULL;





int main(int argc, char* args[]) {


	
	
	sDirector = SceneManager::getInstance();


	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();


	Controles* controles = Controles::getInstance();
	Personaje* personaje = new Personaje();
	Enemigo1* mEnemigo1 = new Enemigo1();
	Enemigo2* mEnemigo2 = new Enemigo2();
	MenuScene* Menu = new MenuScene();
	puertas* puerta = new puertas();

	

	bool endgame = false;



	int idDelGrafico = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");
	if (idDelGrafico == -1) {
		return 0;
	}


	// Init Time control
	Timer* globalTimer = new Timer();
	globalTimer->start();
	Uint32 last_time = 0;




	while (!endgame) {

		//INIT
		Menu->init();
		personaje->init();
		mEnemigo1->init();
		mEnemigo2->init();
		puerta->init();


		/*
		//SCENE DIRECTOR
		//ReInit o no
		if (sDirector->getCurrentScene()->mustReInit()) {
			sDirector->getCurrentScene()->reinit();
		}
		// Read controls
		controles->capturaTeclas();

		//Update time
		Uint32 actualtime = globalTimer->getTicks();
		global_elapsed_time = actualtime - last_time;
		last_time = actualtime;

		// Updates scene
		sDirector->getCurrentScene()->update();

		if (!sDirector->getCurrentScene()->mustReInit()) {
			sDirector->getCurrentScene()->render();
		}
		*/

		


		//UPDATE
		controles->capturaTeclas();
		personaje->MovimientoPersonaje();



		//RENDER
		
		mVideo->renderGraphic(idDelGrafico, 0, 0,1240,720);


		personaje->render();
		mEnemigo1->render();
		puerta->render();


		mVideo->updateScreen();
		mVideo->clearScreen(0);

		



	}

		
		return 0;
	
}