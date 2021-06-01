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
	float posX2;
	float posY2;
	float posX3;
	float posY3;
	float posX4;
	float posY4;

	float width;
	float height;


	bool estoyVivo;
	bool estoyVivo2;
	bool estoyVivo3;
	bool estoyVivo4;



	int vidas = 1;
	int vidas2 = 1;
	int vidas3 = 1;
	int vidas4 = 1;



	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}

	
};

