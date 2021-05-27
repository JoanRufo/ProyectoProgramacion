#include "Balas.h"


void Balas::init()
{
	bala = mResourceManager->loadAndGetGraphicID("Imagenes/Bala.png");

	estatActual = BalaGuardada;
	balaX;
	balaY;
}

void Balas::update()
{
	switch (estatActual) {

	case BalaGuardada:




		break;



	case BalaInicio:
		if (Controles::getInstance()->teclasPulsadas[4] == true) {
			estoyViva = true;
			
			estatActual = BalaMovimiento;
		}
		break;

	case BalaMovimiento:
		if (Controles::getInstance()->teclasPulsadas[4] == false) {

			//estatActual = BalaInicio;
		}
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
		mVideo->renderGraphic(bala, balaX, balaY, 20, 20);

	}
}



/*Hacer maquina de estados

->Estado1 = BalaInicio

->Estado2 = BalaMovimiento

->Estado3 = DestruirBala*/


