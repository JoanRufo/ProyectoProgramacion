#include "puertaArr.h"

void puertaArr::init()
{
	idPuertaArriba = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta.png");
}

void puertaArr::update()
{
}

void puertaArr::render()
{
	mVideo->renderGraphic(idPuertaArriba, 570, -30, 110, 100);
}
