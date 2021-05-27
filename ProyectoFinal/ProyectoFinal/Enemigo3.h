#pragma once
#include "ResourceManager.h"
#include "Video.h"
#include "Personaje.h"

#include <iostream>
#include <Windows.h>
#include <time.h>
class Enemigo3
{
	int idDelEnemigo3;



	float vel;



	Personaje* mPersonaje;
public:
	Enemigo3();
	~Enemigo3();
	void init();
	void update();
	void render();
	void movEnemigo();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();



	float posX;
	float posY;


	int vidas = 5;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

