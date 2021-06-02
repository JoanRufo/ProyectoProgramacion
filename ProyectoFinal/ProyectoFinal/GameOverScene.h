#pragma once

#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"
#include "GameScene.h"


class GameOverScene:public Scene
{

	int x;
	int y;

	int gameOver;

public:
	GameOverScene();
	~GameOverScene();


	void init();
	void update();
	void render();

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();


	

	


};

