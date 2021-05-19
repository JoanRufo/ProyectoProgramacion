#include "puertaDer.h"

void puertaDer::init()
{
	idPuertaDerecha = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta3.png");
}

void puertaDer::update()
{

}


void puertaDer::render()
{
	mVideo->renderGraphic(idPuertaDerecha, 1170, 300, 110, 100);
}

