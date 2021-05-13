#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Habitacion1
{
	int idDeHabitacion1;

public:
	Habitacion1();
	~Habitacion1();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

