#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Habitacion3
{

	int idDeHabitacion3;


public:
	Habitacion3();
	~Habitacion3();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

