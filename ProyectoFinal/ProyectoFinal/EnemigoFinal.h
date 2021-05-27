#pragma once
#include "Video.h"


#include <iostream>
#include <Windows.h>
#include <time.h>
#include "Personaje.h"
using namespace std;

class EnemigoFinal
{
	int idDelEnemigoFinal;
	float vel;
	Personaje* mPersonaje;
public:
	EnemigoFinal();
	~EnemigoFinal();
	void init();
	void update();
	void render();
	void movEnemigo();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	float posX;
	float posY;


	int vidas = 15;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

