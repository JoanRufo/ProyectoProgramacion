#pragma once

#include "SceneManager.h"
#include "Personaje.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "puertaAb.h"
#include "puertaArr.h"
#include "puertaDer.h"
#include "puertaIz.h"
#include "Scene.h"
#include "Habitacion1.h"
#include "Habitacion2.h"
#include "Habitacion3.h"
#include "Habitacion4.h"
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
	Habitacion3* mHabitacion3 = new Habitacion3();
	Habitacion4* mHabitacion4 = new Habitacion4();
	Balas* balas = new Balas();


	puertaAb* puertaAbajo = new puertaAb();
	puertaArr* puertaArriba = new puertaArr();
	puertaDer* puertaDerecha = new puertaDer();
	puertaIz* puertaIzquierda = new puertaIz();


	static GameScene* getInstance();
	static GameScene*		pInstance;


	int idHabitacion;

	

	
};


