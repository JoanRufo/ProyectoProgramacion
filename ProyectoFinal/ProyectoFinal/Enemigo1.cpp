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
	posX;
	posY;
}

void Enemigo1::update()
{


}

void Enemigo1::render()
{
	mVideo->renderGraphic(idDelEnemigo1, posX, posY, 120, 100);
}

void Enemigo1::movEnemigo()
{
	posX = posX + movX;
	if (posX == 21 || posX == 1100) {
		movX *= -1;
	}
}