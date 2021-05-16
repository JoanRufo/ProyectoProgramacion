#include "Enemigo1.h"



Enemigo1::Enemigo1()
{
}


Enemigo1::~Enemigo1()
{

}

void Enemigo1::init()
{
    idDelEnemigo1 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	posX = 400;
	posY = 300;
}

void Enemigo1::update()
{

	//MOVIMIENTO ENEMIGO







}

void Enemigo1::render()
{
	mVideo->renderGraphic(idDelEnemigo1, posX, posY, 120, 100);
}
