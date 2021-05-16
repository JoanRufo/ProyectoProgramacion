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
	int velx = 10;
	int vely = 10;

public:

	int Posx = 600;
	int Posy = 300;

	void init();
	void update();
	void render();
	void MovimientoPersonaje();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	Habitacion2* hab2 = new Habitacion2();



	//std::vector<Balas*>	vBalas;

	
	

	

};

