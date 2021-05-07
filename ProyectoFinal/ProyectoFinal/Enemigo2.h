#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Enemigo2
{
	int idDelEnemigo2;
	int posX;
	int posY;
public:
	Enemigo2();
	~Enemigo2();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

