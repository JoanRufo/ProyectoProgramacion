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

	
	

public:
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
	
	

	bool estoyViva = false;
	int bala;
	int balaX = 600;
	int balaY = 300;
	
};

