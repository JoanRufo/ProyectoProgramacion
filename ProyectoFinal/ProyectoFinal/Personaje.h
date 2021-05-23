#pragma once
#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Balas.h"
#include "Habitacion2.h"
#include <vector>

class Personaje
{
	int velPersonaje;
	int bala;

public:

	float Posx;
	float Posy;
	float vel = 0.1;
	int idDelPersonaje;

	void init();
	void update();
	void render();
	void MovimientoPersonaje();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();



	

	
	

	

};

