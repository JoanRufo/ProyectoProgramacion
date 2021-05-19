#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Habitacion4
{
	int idDeHabitacion4;


public:
	Habitacion4();
	~Habitacion4();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

