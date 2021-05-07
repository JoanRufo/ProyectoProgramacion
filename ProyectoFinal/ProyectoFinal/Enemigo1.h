#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Enemigo1
{
	int idDelEnemigo1;
	int posX;
	int posY;
public:
	Enemigo1();
	~Enemigo1();
	void init();
	void update();
	void render();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

