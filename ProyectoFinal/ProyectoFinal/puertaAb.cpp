#include "puertaAb.h"

void puertaAb::init()
{
	idPuertaAbajo = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta4MasGrande.png");
}

void puertaAb::update()
{
}

void puertaAb::render()
{
	mVideo->renderGraphic(idPuertaAbajo, 550, 640, 150, 150);
}
