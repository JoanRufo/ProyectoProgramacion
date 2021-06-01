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
	vel = 0.2;

	width = 120;
	height = 100;

	estoyVivo = true;
}

void Enemigo3::update()
{
	if (vidas == 0) {
		estoyVivo = false;
	
	}



}

void Enemigo3::render()
{
	if (estoyVivo = true) {
		mVideo->renderGraphic(idDelEnemigo3, posX, posY, width, height);

	}
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
