#pragma once

#include "SDL.h"
#include <iostream>
#include <stdio.h>
#include "Controles.h"
#include "ResourceManager.h"
#include "Video.h"
class Balas 
{

	int bala;


	void init();
	void update();
	void render();
	void dispararBalas();
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
	static Balas* getInstance();
	static Balas*		pInstance;

	
	
};

