#pragma once
#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Balas.h"
#include <vector>

class Personaje
{
	int velocidadPersonaje;
	int idDelPersonaje;
	int bala;

public:

	int Movx = 600;
	int Movy = 300;

	void init();
	void update();
	void render();
	void MovimientoPersonaje();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();


	std::vector<Balas*>	vBalas;

	
	

	

};

