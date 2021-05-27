#include "Enemigo2.h"



Enemigo2::Enemigo2()
{
}


Enemigo2::~Enemigo2()
{

}

void Enemigo2::init()
{
	idDelEnemigo2 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	posX = 800;
	posY = 300;
	vel = 0.3;
}

void Enemigo2::update()
{
}

void Enemigo2::render()
{
	mVideo->renderGraphic(idDelEnemigo2, posX, posY, 120, 100);
}

void Enemigo2::movEnemigo()
{

	if (posX <= mPersonaje->Posx) {

		posX = posX + 0.5 * vel;

	}

	else if (posX >= mPersonaje->Posx) {

		posX = posX - 0.5 * vel;

	}

	if (posY <= mPersonaje->Posy) {

		posY = posY + 0.5 * vel;

	}

	else if (posY >= mPersonaje->Posy) {

		posY = posY - 0.5 * vel;


	}
}
