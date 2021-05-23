#pragma once

#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"


class GameOverScene:public Scene
{
public:
	GameOverScene();
	~GameOverScene();


	void init();
	void update();
	void render();
};

