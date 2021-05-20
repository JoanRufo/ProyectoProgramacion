#include "ObjetoFinal.h"

void ObjetoFinal::init()
{

	mObjetoFinal = mResourceManager->loadAndGetGraphicID("Imagenes/ObjetoFinal.png");
}

void ObjetoFinal::update()
{
}

void ObjetoFinal::render()
{
	mVideo->renderGraphic(mObjetoFinal, 800, 340, 50, 50);
}
