#include "Balas.h"


Balas::Balas()
{
	estatActual = BalaGuardada;
	balaX = 0;
	balaY = 0;

	estoyViva = false;

	direccion = 0;


}

Balas::~Balas()
{
}

void Balas::init()
{
	bala = mResourceManager->loadAndGetGraphicID("Imagenes/Bala.png");

	estatActual = BalaGuardada;
	
}

void Balas::update()
{
	switch (estatActual) {

	case BalaGuardada:




		break;



	case BalaInicio:
		
			estoyViva = true;
			
			estatActual = BalaMovimiento;
		
		break;

	case BalaMovimiento:
		

		/*if () {
		
			direccion = balaX++;
		
		}*/



			
		
		break;

	case DestruirBala:
		//LIMITES PAREDES

		if (bala >= 1180) {

			estoyViva = false;

		}
		else if (bala <= 20) {

			estoyViva = false;

		}
		else if (bala >= 630) {

			estoyViva = false;

		}
		else if (bala <= 0) {

			estoyViva = false;

		}
		
		break;

	}

}

void Balas::render()
{

	if (estatActual == BalaMovimiento) {
		mVideo->renderGraphic(bala, balaX, balaY, 42, 42);

	}
}



/*Hacer maquina de estados

->Estado1 = BalaInicio

->Estado2 = BalaMovimiento

->Estado3 = DestruirBala*/


