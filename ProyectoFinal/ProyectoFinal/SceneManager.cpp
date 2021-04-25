#include "SceneManager.h"

#include "MenuScene.h"
#include "GameScene.h"


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

	//mVectorScenes[MENU] = menu;
	//mVectorScenes[GAME] = game;


	menu->init();
	game->init();


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






