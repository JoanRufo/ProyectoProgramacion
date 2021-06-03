#include "Habitacion3.h"



Habitacion3::Habitacion3()
{
}


Habitacion3::~Habitacion3()
{
}

void Habitacion3::init()
{
	idDeHabitacion3 = mResourceManager->loadAndGetGraphicID("Imagenes/Room3.png");
}

void Habitacion3::update()
{
}

void Habitacion3::render()
{
	mVideo->renderGraphic(idDeHabitacion3, 0, 0, 1240, 720);
}
