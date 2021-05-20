#include "SceneManager.h"




SceneManager* SceneManager::pInstance = NULL;


SceneManager::SceneManager()
{
	init();
}


SceneManager::~SceneManager()
{
}

void SceneManager::init()
{
	mVectorScenes.resize(NUM_SCENES);

	MenuScene	*menu = new MenuScene();
	
	GameScene	*game = new GameScene();

	PauseScene *pause = new PauseScene();
	
	GameOverScene *gameover = new GameOverScene();

	WinScene *win = new WinScene();



	mVectorScenes[MENU] = menu;
	mVectorScenes[GAME] = game;
	mVectorScenes[PAUSE] = pause;
	mVectorScenes[GAMEOVER] = gameover;
	mVectorScenes[WIN] = win;


	menu->init();
	game->init();
	pause->init();

	gameover->init();
	win->init();
	


	mCurrScene = MENU;
} 


void SceneManager::changeScene(SceneEnum next_scene, bool reinit)
{
	mVectorScenes[next_scene]->setReInit(reinit);
	mCurrScene = next_scene;
}

SceneManager * SceneManager::getInstance()
{
	if (!pInstance) {
		pInstance = new SceneManager();
	}
	return pInstance;
}






