#include "HabitacionFinal.h"

HabitacionFinal::HabitacionFinal()
{
}

HabitacionFinal::~HabitacionFinal()
{
}

void HabitacionFinal::init()
{
	idDeHabitacionFinal = mResourceManager->loadAndGetGraphicID("Imagenes/Room2.png");
	printf("%d", idDeHabitacionFinal);
}

void HabitacionFinal::update()
{
}

void HabitacionFinal::render()
{
	mVideo->renderGraphic(idDeHabitacionFinal, 0, 0, 1240, 720);
}
