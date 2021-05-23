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

		posX = posX + 1;
		
	}
	
	else if (posX >= mPersonaje->Posx) {

		posX = posX - 1;
	
	}

	if (posY <= mPersonaje->Posy) {
	
		posY = posY + 1;
	
	}

	else if (posY >= mPersonaje->Posy) {
	
		posY = posY - 1;
		
	
	}

	
	

	

}