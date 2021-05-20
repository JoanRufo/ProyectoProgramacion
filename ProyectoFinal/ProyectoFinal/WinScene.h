#pragma once
#include "SDL.h"
#include <iostream>
#include "SceneManager.h"
#include "ResourceManager.h"
#include "Video.h"
#include "Scene.h"

class WinScene: public Scene
{
public:
	WinScene();
	~WinScene();

	void init();
	void upadte();
	void render();
};

