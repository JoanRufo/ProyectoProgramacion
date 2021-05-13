#pragma once

#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Personaje.h"
class Balas 
{

	enum estadosBala { BalaInicio, BalaMovimiento, DestruirBala };
	estadosBala estatActual;

	int bala;


	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
	static Balas* getInstance();
	static Balas*		pInstance;
	Personaje* mPersonaje = new Personaje();

	
	
};

