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
	int idDelEnemigo2;
	int idDelEnemigo3;
	int idDelEnemigo4;


	float vel1;
	float vel2;
	float vel3;
	float vel4;
	
	
	/*int movX = 1;
	float velx = 0.1f;*/


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

	float posX1;
	float posY1;
	

	float width;
	float height;


	bool estoyVivo;
	



	int vidas = 1;
	



	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}

	
};

