#include "Habitacion4.h"



Habitacion4::Habitacion4()
{
}


Habitacion4::~Habitacion4()
{
}

void Habitacion4::init()
{
	idDeHabitacion4 = mResourceManager->loadAndGetGraphicID("Imagenes/Room3.png");
	printf("%d", idDeHabitacion4);
}

void Habitacion4::update()
{
}

void Habitacion4::render()
{
	mVideo->renderGraphic(idDeHabitacion4, 0, 0, 1240, 720);
}
