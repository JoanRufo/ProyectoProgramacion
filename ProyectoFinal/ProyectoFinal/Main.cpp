#include <iostream>
#include <stdio.h>
#include "Video.h"
#include "ResourceManager.h"




int main(int argc, char* args[]) {

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();



	int idDelGrafico = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");
	if (idDelGrafico == -1) {
		return 0;
	}

	while (1) {

		//UPDATE


		//RENDER
		mVideo->renderGraphic(idDelGrafico, 100, 100,1024,720);

		mVideo->updateScreen();
		mVideo->clearScreen(0);






	}
		return 0;
	
}