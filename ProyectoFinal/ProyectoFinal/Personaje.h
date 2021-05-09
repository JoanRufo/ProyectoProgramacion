#pragma once
#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Balas.h"

class Personaje
{
	int Movx = 600;
	int Movy = 300;
	int velocidadPersonaje;
	int idDelPersonaje;
	int bala;

public:
	void init();
	void update();
	void render();
	void MovimientoPersonaje();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();


	std::vector<Balas*>	vBalas;

	
	

	

};

