#pragma once

#include "SceneManager.h"
#include "Personaje.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "puertas.h"
#include "Scene.h"
#include "Habitacion1.h"
#include "Habitacion2.h"
#include "Balas.h"

class GameScene : public Scene
{

	


public:
	GameScene();
	~GameScene();

	void init();
	void update();
	void render();

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	Personaje* personaje = new Personaje();
	Enemigo1* mEnemigo1 = new Enemigo1();
	Enemigo2* mEnemigo2 = new Enemigo2();
	Habitacion1* mHabitacion1 = new Habitacion1();
	Habitacion2* mHabitacion2 = new Habitacion2();
	Balas* balas = new Balas();
	puertas* puerta = new puertas();

	static GameScene* getInstance();
	static GameScene*		pInstance;

	

	
};


