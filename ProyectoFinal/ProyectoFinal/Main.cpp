#include <iostream>
#include <stdio.h>
#include "Video.h"
#include "ResourceManager.h"
#include "SceneManager.h"
#include "Controles.h"
#include "Timer.h"
#include "Personaje.h"
#include "Enemigo1.h"
#include "Balas.h"
#include "Enemigo2.h"
#include "MenuScene.h"


Uint32 		global_elapsed_time = 0;
bool		gameOn = true;
SceneManager	*sDirector = NULL;


int main(int argc, char* args[]) {


		
	sDirector = SceneManager::getInstance();
	Video* mVideo = Video::getInstance();
	Controles* controles = Controles::getInstance();
	
		
	bool endgame = false;
	
	// Init Time control
	Timer* globalTimer = new Timer();
	globalTimer->start();
	Uint32 last_time = 0;



	//INIT

					
	



	while (!endgame) {

				
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


		mVideo->clearScreen(0);

		if (!sDirector->getCurrentScene()->mustReInit()) {
			sDirector->getCurrentScene()->render();
		}
		

		


		//UPDATE
		



		//RENDER


		
					
		mVideo->updateScreen();
			
	}

		
		return 0;
	
}