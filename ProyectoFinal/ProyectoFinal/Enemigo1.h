#pragma once
#include "ResourceManager.h"
#include "Video.h"
class Enemigo1
{
	int idDelEnemigo1;
	int posX = 600;
	int posY = 200;
	int movX = 1;
public:
	Enemigo1();
	~Enemigo1();
	void init();
	void update();
	void render();
	void movEnemigo();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

