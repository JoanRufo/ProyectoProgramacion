#include <iostream>
#include <stdio.h>
#include "Video.h"
#include "ResourceManager.h"
#include "SceneManager.h"
#include "Controles.h"
#include "Timer.h"
#include "Personaje.h"


Uint32 		global_elapsed_time = 0;
bool		gameOn = true;
SceneManager	*sDirector = NULL;





int main(int argc, char* args[]) {


	
	
	sDirector = SceneManager::getInstance();


	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	Controles* controles = new Controles();
	Personaje* personaje = new Personaje();

	

	bool endgame = false;



	int idDelGrafico = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");
	if (idDelGrafico == -1) {
		return 0;
	}
	int idDelEnemigo1 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	if (idDelEnemigo1 == -1) {
		return 0;
	}
	int idDelEnemigo2 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo2.png");
	if (idDelEnemigo2 == -1) {
		return 0;
	}
	int idPuertaArriba = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta.png");
	if (idPuertaArriba == -1) {
		return 0;
	}


	// Init Time control
	Timer* globalTimer = new Timer();
	globalTimer->start();
	Uint32 last_time = 0;




	while (!endgame) {

		//INIT

		personaje->init();



		/* SCENE DIRECTOR
		//ReInit o no
		if (sDirector->getCurrentScene()->mustReInit()) {
			sDirector->getCurrentScene()->ReInit();
		}
		// Read controls
		sInputControl->update();

		//Update time
		Uint32 actualtime = globalTimer->getTicks();
		global_elapsed_time = actualtime - last_time;
		last_time = actualtime;

		// Updates scene
		sDirector->getCurrentScene()->update();

		if (!sDirector->getCurrentScene()->mustReInit()) {
			sDirector->getCurrentScene()->render();
		}*/


		


		//UPDATE
		controles->capturaTeclas();
		personaje->MovimientoPersonaje();



		//RENDER
		mVideo->renderGraphic(idDelGrafico, 0, 0,1240,720);
		//mVideo->renderGraphic(idDelEnemigo1, 300, 300, 120, 100);
		//mVideo->renderGraphic(idDelEnemigo2, 900, 300, 120, 100);
		mVideo->renderGraphic(idPuertaArriba, 615, -20, 110, 100);

		personaje->render();

		mVideo->updateScreen();
		mVideo->clearScreen(0);

		



	}

		
		return 0;
	
}