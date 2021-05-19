#pragma once
#include "ResourceManager.h"
#include "Video.h"
class puertaArr
{
public:
	void init();
	void update();
	void render();
	int idPuertaArriba;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

