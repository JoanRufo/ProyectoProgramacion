#pragma once
#include "ResourceManager.h"
#include "Video.h"
class puertaAb
{
public:
	void init();
	void update();
	void render();
	int idPuertaAbajo;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

