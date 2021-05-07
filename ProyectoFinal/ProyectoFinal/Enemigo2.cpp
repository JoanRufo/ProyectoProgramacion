#include "Enemigo2.h"



Enemigo2::Enemigo2()
{
}


Enemigo2::~Enemigo2()
{

}

void Enemigo2::init()
{
	idDelEnemigo2 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo2.png");
	posX = 800;
	posY = 300;
}

void Enemigo2::update()
{
}

void Enemigo2::render()
{
	mVideo->renderGraphic(idDelEnemigo2, posX, posY, 120, 100);
}
