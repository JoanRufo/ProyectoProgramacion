#pragma once

#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"


class MenuScene:public Scene
{
	int x;
	int y;

	int Background;
	int Botones;
	int Tip;


	


public:
	MenuScene();
	~MenuScene();


	void init();
	void update();
	void render();

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
	
	
};


