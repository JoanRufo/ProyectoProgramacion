#pragma once
#include "ResourceManager.h"
#include "Video.h"
#include "Personaje.h"


#include <iostream>
#include <Windows.h>
#include <time.h>
class Enemigo2
{
	int idDelEnemigo2;
	


	float vel;



	Personaje* mPersonaje;
public:
	Enemigo2();
	~Enemigo2();
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

