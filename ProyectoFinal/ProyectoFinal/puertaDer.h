#pragma once
#include "ResourceManager.h"
#include "Video.h"
class puertaDer
{
public:
	void init();
	void update();
	void render();
	int idPuertaDerecha;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

