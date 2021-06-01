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
	
	posX;
	posY;
	
	vel;
	

	width;
	height;


	

	estoyVivo = true;

	
}

void Enemigo2::update()
{
	if (vidas1 == 0) {
		estoyVivo = false;
	}

}

void Enemigo2::render()
{
	if (estoyVivo == true) {
		mVideo->renderGraphic(idDelEnemigo2, posX, posY, width, height);
	}

	

	
}

void Enemigo2::movEnemigo()
{
	//PRIMER ENEMIGO
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
