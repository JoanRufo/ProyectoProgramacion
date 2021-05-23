#include "Personaje.h"



void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");

	/*PersonajeAbajo = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeAbajo.png");
	PersonajeArriba = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeArriba.png");
	PersonajeDerecha = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeDerecha.png");
	PersonajeIzquierda = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeIzquierda.png");*/

	Posx = 600;
	Posy = 300;
	vel;


	//idDelPersonaje = 1;
	
}

void Personaje::update()
{


}

void Personaje::render()
{

	/*if (idDelPersonaje = 1) {
	
		mVideo->renderGraphic(PersonajeArriba, Posx, Posy, 150, 200);
	}

	else if (idDelPersonaje = 2) {
	
		mVideo->renderGraphic(PersonajeAbajo, Posx, Posy, 150, 200);
		
	}

	else if (idDelPersonaje = 3) {

		mVideo->renderGraphic(PersonajeDerecha, Posx, Posy, 150, 200);

	}

	else if (idDelPersonaje = 4) {

		mVideo->renderGraphic(PersonajeIzquierda, Posx, Posy, 150, 200);

	}*/



	mVideo->renderGraphic(idDelPersonaje, Posx, Posy, 34, 60);
}

void Personaje::MovimientoPersonaje()
{
	
		//MOVIMIENTO
		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			//idDelPersonaje = 1;
			Posy-=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[1] == true) {
			//idDelPersonaje = 4;
			Posx-=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[2] == true) {
			//idDelPersonaje = 2;
			Posy+=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[3] == true) {
			//idDelPersonaje = 3;
			Posx+=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[4] == true) {
			
			/*mVideo->renderGraphic(bala, Posx, Posy, 20, 20);
			Balas *vBalas = new Balas();*/
			
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
		else if (Posy <= 0){
			Posy = 0;
		}

}
	


