#include "puertas.h"

void puertas::init()
{
	idPuertaArriba = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta.png");
	idPuertaIzquierda = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta2.png");
	idPuertaDerecha = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta3.png");
	idPuertaAbajo = mResourceManager->loadAndGetGraphicID("Imagenes/Puerta4.png");

}

void puertas::update()
{
}

void puertas::render()
{
	mVideo->renderGraphic(idPuertaArriba, 570, -40, 110, 100);
	mVideo->renderGraphic(idPuertaIzquierda, -50, 300, 110, 100);
	mVideo->renderGraphic(idPuertaDerecha, 1170, 300, 110, 100);
	mVideo->renderGraphic(idPuertaAbajo, 570, 650, 110, 100);
}
