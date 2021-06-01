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
	int idDelEnemigo22;
	


	float vel;
	float vel2;



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
	float posX2;
	float posY2;
	float width;
	float height;

	float width2;
	float height2;


	bool estoyVivo;
	bool estoyVivo2;


	int vidas1 = 1;
	int vidas2 = 1;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

