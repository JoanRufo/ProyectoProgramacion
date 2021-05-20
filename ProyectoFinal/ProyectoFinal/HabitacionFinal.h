#pragma once
#include "ResourceManager.h"
#include "Video.h"
class HabitacionFinal
{

	int idDeHabitacionFinal;


public:
	HabitacionFinal();
	~HabitacionFinal();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();



};

