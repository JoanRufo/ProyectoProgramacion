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
	posX = 600;
	posY = 200;
	vel = 0.3;
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