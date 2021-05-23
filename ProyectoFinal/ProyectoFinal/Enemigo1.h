#pragma once
#include "ResourceManager.h"
#include "Personaje.h"
#include "Video.h"


#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

class Enemigo1
{
	int idDelEnemigo1;


	int posX;
	int posY;
	
	
	int movX = 1;
	float velx = 0.1f;


	Personaje* mPersonaje;



public:
	Enemigo1();
	~Enemigo1();
	void init();
	void update();
	void render();
	void movEnemigo();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}

	
};

