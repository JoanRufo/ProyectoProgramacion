#include <iostream>
#include <stdio.h>
#include "Video.h"
#include "ResourceManager.h"
#include "SceneManager.h"
#include "Controles.h"





int main(int argc, char* args[]) {


	//SceneManager *sceneManager = new SceneManager();
	//sceneManager->changeScene(0);
	
	


	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	bool endgame = false;



	int idDelGrafico = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");
	if (idDelGrafico == -1) {
		return 0;
	}
	int idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");
	if (idDelPersonaje == -1) {
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
	while (!endgame) {

		//UPDATE


		//RENDER
		mVideo->renderGraphic(idDelGrafico, 0, 0,1240,720);
		mVideo->renderGraphic(idDelPersonaje, 600, 300, 34, 60);
		mVideo->renderGraphic(idDelEnemigo1, 300, 300, 120, 100);
		mVideo->renderGraphic(idDelEnemigo2, 900, 300, 120, 100);
		mVideo->renderGraphic(idPuertaArriba, 615, -10, 117, 89);

		mVideo->updateScreen();
		mVideo->clearScreen(0);




	}

		//delete sceneManager;
		return 0;
	
}