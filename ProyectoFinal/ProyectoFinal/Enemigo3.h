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

	float width;
	float height;

	bool estoyVivo;

	float vel;
	int vidas = 0;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

