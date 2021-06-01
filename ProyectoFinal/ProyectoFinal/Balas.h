#pragma once

#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"

class Balas 
{


public:
	enum estadosBala { BalaGuardada, BalaInicio, BalaMovimiento, DestruirBala };

private:	
	estadosBala estatActual;

	
	

public:
	Balas();
	~Balas();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
	
	

	bool estoyViva = false;
	int bala;
	float balaX = 600;
	float balaY = 300;
	
	int direccion;

	float vel = 0.5;
	
	

	void setX(float valor) { balaX = valor; };
	void setY(float valor) { balaY = valor; };

	void setDireccion(int valor) { direccion = valor; };


	void setEstado(estadosBala valor) {estatActual = valor ; };




	


	
};

