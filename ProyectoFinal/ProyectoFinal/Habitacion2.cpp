#include "Habitacion2.h"

Habitacion2::Habitacion2()
{
}

Habitacion2::~Habitacion2()
{
}

void Habitacion2::init()
{
	idDeHabitacion2 = mResourceManager->loadAndGetGraphicID("Imagenes/Room3.png");
}

void Habitacion2::update()
{
}

void Habitacion2::render()
{
	mVideo->renderGraphic(idDeHabitacion2, 0, 0, 1240, 720);
}
