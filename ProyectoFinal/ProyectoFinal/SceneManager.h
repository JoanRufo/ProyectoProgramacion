#pragma once
#include "SDL.h"
#include "MenuScene.h"
#include "GameScene.h"



class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void changeScene(short id);
	SceneManager* scene;
	void start(SceneManager *sceneManager);

};


