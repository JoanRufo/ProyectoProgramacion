#include "puertaAb.h"

void puertaAb::init()
{
	idPuertaAbajo = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta4.png");
}

void puertaAb::update()
{
}

void puertaAb::render()
{
	mVideo->renderGraphic(idPuertaAbajo, 570, 650, 110, 100);
}
