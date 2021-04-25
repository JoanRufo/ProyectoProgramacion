#include "Scene.h"



Scene::Scene()
{
	mReinit = true;
}


Scene::~Scene()
{
}

void Scene::init()
{
	mReinit = false;
}

void Scene::reinit()
{
	mReinit = false;
}

void Scene::render()
{
}

void Scene::update()
{
}
