#include "Personaje.h"



void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");

	Posx;
	Posy;

	velx;
	vely;

	
}

void Personaje::update()
{

}

void Personaje::render()
{
	mVideo->renderGraphic(idDelPersonaje, Posx, Posy, 34, 60);
}

void Personaje::MovimientoPersonaje()
{
	
		//MOVIMIENTO
		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			Posy--;
		}
		else if (Controles::getInstance()->teclasPulsadas[1] == true) {
			Posx--;
		}
		else if (Controles::getInstance()->teclasPulsadas[2] == true) {
			Posy++;
		}
		else if (Controles::getInstance()->teclasPulsadas[3] == true) {
			Posx++;
		}
		else if (Controles::getInstance()->teclasPulsadas[4] == true) {
			
			mVideo->renderGraphic(bala, Posx, Posy, 20, 20);
			Balas *vBalas = new Balas();
			
		}
		


		//LIMITES 
		if (Posx >= 1180) {
			Posx = 1179;
		}
		else if (Posx <= 20) {
			Posx = 21;
		}

		else if (Posy >= 630) {
			Posy = 629;
		}
		else if (Posy <= 0) {
			Posy = 0;
		}





		//CAMBIAR DE HABITACIONES

	
	
}
