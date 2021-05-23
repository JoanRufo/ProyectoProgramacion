#pragma once
#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"
class PauseScene : public Scene
{
	int x;
	int y;

	int menu;




public:

	PauseScene();
	~PauseScene();



	void init();
	void update();
	void render();



	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();



};

