#include "puertaIz.h"

void puertaIz::init()
{
	idPuertaIzquierda = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta2.png");
}

void puertaIz::update()
{
}

void puertaIz::render()
{
	mVideo->renderGraphic(idPuertaIzquierda, -50, 300, 110, 100);
}
