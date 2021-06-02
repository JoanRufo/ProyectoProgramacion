#include "Balas.h"




Balas::Balas()
{
	estatActual = BalaGuardada;
	balaX = 0;
	balaY = 0;
	vel;

	estoyViva = false;

	direccion = 0;


}

Balas::~Balas()
{
}

void Balas::init()
{
	bala = mResourceManager->loadAndGetGraphicID("Imagenes/Bala.png");

	width = 30;
	height = 30;

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
		
			balaY -= 1 * vel;
		
		}

		if (direccion == 2) {

			balaX-=1*vel;

		}

		if (direccion == 3) {


			balaY+= 1 * vel;
		}

		if (direccion == 4) {

			balaX+= 1 * vel;

		}

		if (direccion == 5) {
			balaX-= 1 * vel;
			balaY-= 1 * vel;
		}

		if (direccion == 6) {
			balaX+= 1 * vel;
			balaY-= 1 * vel;
		}

		if (direccion == 7) {
			balaX-= 1 * vel;
			balaY+= 1 * vel;
		}

		if (direccion == 8) {
			balaX+= 1 * vel;
			balaY+= 1 * vel;
		}



			
		
		break;

	

	}

}

void Balas::render()
{

	if (estatActual == BalaMovimiento) {
		mVideo->renderGraphic(bala, balaX, balaY, width, height);

	}
}






