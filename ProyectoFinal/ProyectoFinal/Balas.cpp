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
		


		

		if (direccion == 1) {
		
			balaY--;
		
		}

		if (direccion == 2) {

			balaX--;

		}

		if (direccion == 3) {


			balaY++;
		}

		if (direccion == 4) {

			balaX++;

		}

		if (direccion == 5) {
			balaX--;
			balaY--;
		}

		if (direccion == 6) {
			balaX++;
			balaY--;
		}

		if (direccion == 7) {
			balaX--;
			balaY++;
		}

		if (direccion == 8) {
			balaX++;
			balaY++;
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
		mVideo->renderGraphic(bala, balaX, balaY, 42, 42);

	}
}






