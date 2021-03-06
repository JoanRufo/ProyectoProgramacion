#pragma once

#include "SceneManager.h"
#include "Personaje.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "Enemigo3.h"
#include "puertaAb.h"
#include "puertaArr.h"
#include "puertaDer.h"
#include "puertaIz.h"
#include "Scene.h"
#include "Habitacion1.h"
#include "Habitacion2.h"
#include "Habitacion3.h"
#include "Habitacion4.h"
#include "HabitacionFinal.h"
#include "ObjetoFinal.h"
#include "EnemigoFinal.h"

class GameScene : public Scene
{

	


public:
	GameScene();
	~GameScene();

	void init();
	void update();
	void render();

	bool detectarColisiones(float aX, float aY, float aW, float aH, float bX, float bY, float bW, float bH);

	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();

	Personaje* personaje = new Personaje();
	Enemigo1* mEnemigo1A = new Enemigo1();
	Enemigo1* mEnemigo1B = new Enemigo1();
	Enemigo1* mEnemigo1C = new Enemigo1();
	Enemigo1* mEnemigo1D = new Enemigo1();
	Enemigo2* mEnemigo2A = new Enemigo2();
	Enemigo2* mEnemigo2B = new Enemigo2();
	Enemigo3* mEnemigo3 = new Enemigo3();
	Enemigo3* mEnemigo3B = new Enemigo3();
	EnemigoFinal* mEnemigoFinal = new EnemigoFinal();
	Habitacion1* mHabitacion1 = new Habitacion1();
	Habitacion2* mHabitacion2 = new Habitacion2();
	Habitacion3* mHabitacion3 = new Habitacion3();
	Habitacion4* mHabitacion4 = new Habitacion4();
	HabitacionFinal* mHabitacionFinal = new HabitacionFinal();
	
	
	


	std::vector<Balas>mVectorBalas;


	ObjetoFinal* mObjetoFinal = new ObjetoFinal();


	puertaAb* puertaAbajo = new puertaAb();
	puertaArr* puertaArriba = new puertaArr();
	puertaDer* puertaDerecha = new puertaDer();
	puertaIz* puertaIzquierda = new puertaIz();


	



	static GameScene* getInstance();
	static GameScene* pInstance;


	int idHabitacion;




	

	
};


