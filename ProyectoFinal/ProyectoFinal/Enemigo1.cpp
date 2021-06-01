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
	idDelEnemigo2 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	idDelEnemigo3 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	idDelEnemigo4 = mResourceManager->loadAndGetGraphicID("Imagenes/Enemigo1.png");
	posX1 = 600;
	posY1 = 350;
	posX2 = 500;
	posY2 = 400;
	posX3 = 600;
	posY3 = 600;
	posX4 = 200;
	posY4 = 100;
	vel1 = 0.3;
	vel2 = 0.2;
	vel3 = 0.1;
	vel4 = 0.4;


	estoyVivo = true;
}

void Enemigo1::update()
{


}

void Enemigo1::render()
{

	if (estoyVivo == true) {


		mVideo->renderGraphic(idDelEnemigo1, posX1, posY1, 70, 60);
		mVideo->renderGraphic(idDelEnemigo2, posX2, posY2, 70, 60);
		mVideo->renderGraphic(idDelEnemigo3, posX3, posY3, 70, 60);
		mVideo->renderGraphic(idDelEnemigo4, posX4, posY4, 70, 60);


	}
}

void Enemigo1::movEnemigo()
{

	
	
	if (posX1 <= mPersonaje->Posx) {

		posX1 = posX1 + 0.5 * vel1;
		
	}
	
	 if (posX1 >= mPersonaje->Posx) {

		posX1 = posX1 - 0.5 * vel1;
	
	}

	if (posY1 <= mPersonaje->Posy) {
	
		posY1 = posY1 + 0.5 * vel1;
	
	}

	 if (posY1 >= mPersonaje->Posy) {
	
		posY1 = posY1 - 0.5 * vel1;
		
	
	}

	if (posX2 <= mPersonaje->Posx) {

		posX2 = posX2 + 0.5 * vel2;

	}

	 if (posX2 >= mPersonaje->Posx) {

		posX2 = posX2 - 0.5 * vel2;

	}

	if (posY2 <= mPersonaje->Posy) {

		posY2 = posY2 + 0.5 * vel2;

	}

	 if (posY2 >= mPersonaje->Posy) {

		posY2 = posY2 - 0.5 * vel2;


	}

	if (posX3 <= mPersonaje->Posx) {

		posX3 = posX3 + 0.5 * vel3;

	}

	 if (posX3 >= mPersonaje->Posx) {

		posX3 = posX3 - 0.5 * vel3;

	}

	if (posY3 <= mPersonaje->Posy) {

		posY3 = posY3 + 0.5 * vel3;

	}

	 if (posY3 >= mPersonaje->Posy) {

		posY3 = posY3 - 0.5 * vel3;


	}

	if (posX4 <= mPersonaje->Posx) {

		posX4 = posX4 + 0.5 * vel4;

	}

	 if (posX4 >= mPersonaje->Posx) {

		posX4 = posX4 - 0.5 * vel4;

	}

	if (posY4 <= mPersonaje->Posy) {

		posY4 = posY4 + 0.5 * vel4;

	}

	 if (posY4 >= mPersonaje->Posy) {

		posY4 = posY4 - 0.5 * vel4;


	}

	
	

	

}