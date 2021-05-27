#include "Enemigo3.h"



Enemigo3::Enemigo3()
{
}


Enemigo3::~Enemigo3()
{
}

void Enemigo3::init()
{
	idDelEnemigo3 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	posX = 800;
	posY = 300;
	vel = 0.3;
}

void Enemigo3::update()
{
}

void Enemigo3::render()
{
	mVideo->renderGraphic(idDelEnemigo3, posX, posY, 120, 100);
}

void Enemigo3::movEnemigo()
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
