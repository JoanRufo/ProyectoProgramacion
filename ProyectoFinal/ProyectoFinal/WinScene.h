#pragma once
#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"
#include "GameScene.h"

class WinScene: public Scene
{

	int x;
	int y;

	int win;


public:
	WinScene();
	~WinScene();

	void init();
	void upadte();
	void render();

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

