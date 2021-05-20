#pragma once
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <vector>	
#include "SDL.h"
#include "MenuScene.h"
#include "GameScene.h"
#include "PauseScene.h"
#include "GameOverScene.h"
#include "WinScene.h"
#include "Scene.h"



enum SceneEnum {
	MENU, GAME, PAUSE, WIN, GAMEOVER, 
	_LASTSCENE
};

#define NUM_SCENES _LASTSCENE


class SceneManager
{
public:
	
	~SceneManager();

	void init();
	void changeScene(SceneEnum next_scene, bool reinit = true);
	SceneEnum getCurrSceneEnum() { return mCurrScene; };
	Scene* getCurrentScene() { return mVectorScenes[mCurrScene]; };

	
	static SceneManager* getInstance();




protected:

	SceneManager();
	static SceneManager*	pInstance;

	std::vector<Scene*>	mVectorScenes;
	SceneEnum		mCurrScene;

	

};

#endif


