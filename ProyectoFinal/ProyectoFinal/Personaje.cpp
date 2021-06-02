#include "Personaje.h"




void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeAbajo.png");
	idDelPersonaje2 = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeArriba.png");
	idDelPersonaje3 = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeIzquierda.png");
	idDelPersonaje4 = mResourceManager->loadAndGetGraphicID("Imagenes/PersonajeDerecha.png");
	

	Posx = 600;
	Posy = 300;

	width = 50;
	height = 70;
	vel;

	a = false;


}

void Personaje::update()
{


}

void Personaje::render()
{
	
		mVideo->renderGraphic(idDelPersonaje, Posx, Posy, width, height);

	

		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			mVideo->renderGraphic(idDelPersonaje2, Posx, Posy, width, height);
		}

		if (Controles::getInstance()->teclasPulsadas[1] == true) {
			mVideo->renderGraphic(idDelPersonaje3, Posx, Posy, width, height);
		}

		if (Controles::getInstance()->teclasPulsadas[2] == true) {
			mVideo->renderGraphic(idDelPersonaje, Posx, Posy, width, height);
		}

		if (Controles::getInstance()->teclasPulsadas[3] == true) {
			mVideo->renderGraphic(idDelPersonaje4, Posx, Posy, width, height);
		}
	
}

void Personaje::MovimientoPersonaje()
{
	
		//MOVIMIENTO
		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			Posy-=1*vel;

		
			idDireccion = 1;
		}
		if (Controles::getInstance()->teclasPulsadas[1] == true) {
			Posx-=1*vel;

			idDireccion = 2;
		}
		if (Controles::getInstance()->teclasPulsadas[2] == true) {
			Posy+=1*vel;

			idDireccion = 3;
		}
		if (Controles::getInstance()->teclasPulsadas[3] == true) {
			Posx+=1*vel;

			idDireccion = 4;
		}
		if (Controles::getInstance()->teclasPulsadas[0] == true && Controles::getInstance()->teclasPulsadas[1] == true) {

			idDireccion = 5;

		}

		if (Controles::getInstance()->teclasPulsadas[0] == true && Controles::getInstance()->teclasPulsadas[3] == true) {

			idDireccion = 6;

		}

		if (Controles::getInstance()->teclasPulsadas[2] == true && Controles::getInstance()->teclasPulsadas[1] == true) {

			idDireccion = 7;

		}

		if (Controles::getInstance()->teclasPulsadas[2] == true && Controles::getInstance()->teclasPulsadas[3] == true) {

			idDireccion = 8;

		}

		if (Controles::getInstance()->teclasPulsadas[4] == true) {

			a = true;
			
			
		}

			if (a == true && b == false) {

				b = true;

				for (int i = 0; i < pVectorBalas->size(); i++) {


					if (pVectorBalas->at(i).estoyViva == false) {

						pVectorBalas->at(i).setX(Posx);
						pVectorBalas->at(i).setY(Posy);

						pVectorBalas->at(i).setDireccion(idDireccion);

						pVectorBalas->at(i).setEstado(Balas::BalaInicio);
						
						break;
					}

					


				}

					
			}

			if (Controles::getInstance()->teclasPulsadas[4] == false) {

				a = false;
				b = false;


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
	


