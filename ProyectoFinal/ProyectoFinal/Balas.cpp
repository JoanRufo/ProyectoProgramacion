#include "Balas.h"

Balas* Balas::pInstance = NULL;

void Balas::init()
{
	bala = mResourceManager->loadAndGetGraphicID("Imagenes/Bala.png");
}

void Balas::update()
{
}

void Balas::render()
{
}

void Balas::dispararBalas()
{

}

Balas * Balas::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new Balas();
	}
	return pInstance;
}


