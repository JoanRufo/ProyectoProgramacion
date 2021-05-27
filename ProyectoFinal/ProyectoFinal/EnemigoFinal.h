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
	int idDelEnemigoPeque1;
	int idDelEnemigoPeque2;
	int idDelEnemigoPeque3;
	int idDelEnemigoPeque4;
	int idDelEnemigoPeque5;
	int idDelEnemigoPeque6;
	int idDelEnemigoPeque7;
	int idDelEnemigoPeque8;
	int idDelEnemigoPeque9;
	int idDelEnemigoPeque10;
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
	float posX1;
	float posY1;
	float posX2;
	float posY2;
	float posX3;
	float posY3;
	float posX4;
	float posY4;
	float posX5;
	float posY5;
	float posX6;
	float posY6;
	float posX7;
	float posY7;
	float posX8;
	float posY8;
	float posX9;
	float posY9;
	float posX10;
	float posY10;


	float vel;
	float vel1;
	float vel2;
	float vel3;
	float vel4;
	float vel5;
	float vel6;
	float vel7;
	float vel8;
	float vel9;
	float vel10;

	int vidas = 15;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

