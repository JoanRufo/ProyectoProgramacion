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
	int idDelPersonaje;
	int bala;

public:

	float Posx = 600;
	float Posy = 300;
	float vel = 0.3;

	void init();
	void update();
	void render();
	void MovimientoPersonaje();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	Habitacion2* hab2 = new Habitacion2();



	//std::vector<Balas*>	vBalas;

	
	

	

};

