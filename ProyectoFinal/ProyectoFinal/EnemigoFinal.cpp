#include "EnemigoFinal.h"



EnemigoFinal::EnemigoFinal()
{
}


EnemigoFinal::~EnemigoFinal()
{
}

void EnemigoFinal::init()
{
	idDelEnemigoFinal = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo2.png");
	posX = 600;
	posY = 200;
	vel = 0.3;
}

void EnemigoFinal::update()
{
}

void EnemigoFinal::render()
{
	mVideo->renderGraphic(idDelEnemigoFinal, posX, posY, 200, 150);
}

void EnemigoFinal::movEnemigo()
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
