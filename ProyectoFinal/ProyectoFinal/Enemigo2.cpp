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
	idDelEnemigo22 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo2.png");
	
	posX = 800;
	posY = 300;
	posX2 = 700;
	posY2 = 500;
	vel = 0.2;
	vel2 = 0.1;

	estoyVivo = true;

	estoyVivo2 = true;
}

void Enemigo2::update()
{
	if (vidas1 == 0) {
		estoyVivo = false;
	}

	if (vidas2 == 0) {
		estoyVivo2 = false;
	}

}

void Enemigo2::render()
{
	if (estoyVivo == true) {
		mVideo->renderGraphic(idDelEnemigo2, posX, posY, 120, 100);

	}

	if (estoyVivo2 == true) {
		mVideo->renderGraphic(idDelEnemigo22, posX2, posY2, 200, 150);
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

	//SEGUNDO ENEMIGO
	if (posX2 <= mPersonaje->Posx) {

		posX2 = posX2 + 0.5 * vel2;

	}

	else if (posX2 >= mPersonaje->Posx) {

		posX2 = posX2 - 0.5 * vel2;

	}

	if (posY2 <= mPersonaje->Posy) {

		posY2 = posY2 + 0.5 * vel2;

	}

	else if (posY2 >= mPersonaje->Posy) {

		posY2 = posY2 - 0.5 * vel2;


	}
}
