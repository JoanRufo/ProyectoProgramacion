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

	float width;
	float height;

	float vel;


	bool estoyVivo;
	


	int vidas1 = 2;


	void setPersonaje(Personaje *data) {
		mPersonaje = data;
	}
};

