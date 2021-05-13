#include "Habitacion1.h"



Habitacion1::Habitacion1()
{
}


Habitacion1::~Habitacion1()
{
}

void Habitacion1::init()
{
	idDeHabitacion1 = mResourceManager->loadAndGetGraphicID("Imagenes/Room1.png");
}

void Habitacion1::update()
{
}

void Habitacion1::render()
{
	mVideo->renderGraphic(idDeHabitacion1, 1240, 720, 120, 100);
}
