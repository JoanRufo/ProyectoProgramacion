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
	
	posX1 = 600;
	posY1 = 350;
	
	vel1 = 0.2;
	vel2 = 0.1;
	vel3 = 0.05;
	vel4 = 0.3;

	width = 70;
	height = 60;


	estoyVivo = true;
	
}

void Enemigo1::update()
{
	if (vidas == 0) {
	
		estoyVivo = false;
	
	
	}

	

}

void Enemigo1::render()
{

	if (estoyVivo == true) {


		mVideo->renderGraphic(idDelEnemigo1, posX1, posY1, width, height);
		
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

	
	
	

	

}