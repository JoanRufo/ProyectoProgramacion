#include "Personaje.h"



void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");

	Movx = 600;
	Movy = 300;
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
	
		if (teclasPulsadas[W] == true) {
			Movy++;
		}
		else if (teclasPulsadas[A] == true) {
			Movx--;
		}
		else if (teclasPulsadas[S] == true) {
			Movy--;
		}
		else if (teclasPulsadas[D] == true) {
			Movx++;
		}
	
}
