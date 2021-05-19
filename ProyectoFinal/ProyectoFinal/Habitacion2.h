#pragma once
#include "ResourceManager.h"
#include "Video.h"
#include "Personaje.h"
class Habitacion2
{

	int idDeHabitacion2;


public:
	Habitacion2();
	~Habitacion2();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

