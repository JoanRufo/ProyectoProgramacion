#include "EnemigoFinal.h"



EnemigoFinal::EnemigoFinal()
{
}


EnemigoFinal::~EnemigoFinal()
{
}

void EnemigoFinal::init()
{
	idDelEnemigoFinal = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");


	


	posX = 600;
	posY = 200;
	
	vel = 0.1;

	width = 200;
	height = 150;

	estoyVivo = true;

	vidas = 15;
	

}

void EnemigoFinal::update()
{
	if (vidas == 0) {
	
		estoyVivo = false;
	
	}

}

void EnemigoFinal::render()
{
	if (estoyVivo == true) {

		mVideo->renderGraphic(idDelEnemigoFinal, posX, posY, width, height);

	}
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
