#include "Balas.h"

Balas* Balas::pInstance = NULL;

void Balas::init()
{
	bala = mResourceManager->loadAndGetGraphicID("Imagenes/Bala.png");

	estatActual = BalaInicio;
}

void Balas::update()
{
	switch (estatActual) {
	
	case BalaInicio:
		if (Controles::getInstance()->teclasPulsadas[4] == true) {
			estatActual = BalaMovimiento;
		}
		break;

	case BalaMovimiento:
		if () {

		}
		break;

	case DestruirBala:
		if () {

		}
		break;

	}
}

void Balas::render()
{
	mVideo->renderGraphic(bala, mPersonaje->Movx, mPersonaje->Movy, 20, 20);
}

Balas * Balas::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new Balas();
	}
	return pInstance;
}

/*Hacer maquina de estados

->Estado1 = BalaInicio

->Estado2 = BalaMovimiento

->Estado3 = DestruirBala*/


