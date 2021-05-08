#include "Personaje.h"



void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");

	Movx;
	Movy;
}

void Personaje::update()
{
}

void Personaje::render()
{
	mVideo->renderGraphic(idDelPersonaje, Movx, Movy, 34, 60);
}

void Personaje::MovimientoPersonaje()
{
	
		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			Movy--;
		}
		else if (Controles::getInstance()->teclasPulsadas[1] == true) {
			Movx--;
		}
		else if (Controles::getInstance()->teclasPulsadas[2] == true) {
			Movy++;
		}
		else if (Controles::getInstance()->teclasPulsadas[3] == true) {
			Movx++;
		}

		if (Movx >= 1180) {
			Movx = 1179;
		}
		else if (Movx <= 20) {
			Movx = 21;
		}

		else if (Movy >= 630) {
			Movy = 629;
		}
		else if (Movy <= 0) {
			Movy = 0;
		}
	
}
