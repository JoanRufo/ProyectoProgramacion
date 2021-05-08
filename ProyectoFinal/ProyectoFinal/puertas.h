#pragma once
#include "ResourceManager.h"
#include "Video.h"
class puertas
{
public:
	void init();
	void update();
	void render();
	int idPuertaArriba;
	int idPuertaIzquierda;
	int idPuertaDerecha;
	int idPuertaAbajo;
	ResourceManager* mResourceManager = ResourceManager::getInstance();
	Video* mVideo = Video::getInstance();
};

