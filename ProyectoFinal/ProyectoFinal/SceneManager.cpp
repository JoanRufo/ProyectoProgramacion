#include "SceneManager.h"


SceneManager::SceneManager()
{
}


SceneManager::~SceneManager()
{
}

void SceneManager::changeScene(short id)
{


		if (scene != NULL) {
			delete scene;
		}

		if (id == 0) {
			scene = new MenuScene();
		}
		else if (id == 1) {
			scene = new GameScene();
		}

		if (scene) {
			scene->start(this);
		}
	
}

void SceneManager::start(SceneManager * sceneManager)
{



}




