#pragma once
#include "ResourceManager.h"
#include "Video.h"
class puertaIz
{
public:
	void init();
	void update();
	void render();
	int idPuertaIzquierda;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

