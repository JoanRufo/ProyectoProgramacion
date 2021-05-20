#pragma once
#include "ResourceManager.h"
#include "Video.h"
class ObjetoFinal
{


public:
	void init();
	void update();
	void render();
	int mObjetoFinal;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

