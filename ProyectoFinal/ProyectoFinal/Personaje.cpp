#include "Personaje.h"



void Personaje::init()
{
	idDelPersonaje = mResourceManager->loadAndGetGraphicID("Imagenes/Personaje.png");

	

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
	mVideo->renderGraphic(idDelPersonaje, Posx, Posy, 50, 70);
}

void Personaje::MovimientoPersonaje()
{
	
		//MOVIMIENTO
		if (Controles::getInstance()->teclasPulsadas[0] == true) {
			Posy-=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[1] == true) {
			Posx-=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[2] == true) {
			Posy+=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[3] == true) {
			Posx+=1*vel;
		}
		else if (Controles::getInstance()->teclasPulsadas[4] == true) {


			for (int i = 0; pVectorBalas->size(); i++) {
			
				pVectorBalas->at(i).estoyViva = true;

				
				
			
			
			
			
			
			
			
			}
			
			
			
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
	


