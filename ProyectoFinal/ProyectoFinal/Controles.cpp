#include "Controles.h"



Controles::Controles()
{

}


Controles::~Controles()
{
}

void Controles::capturaTeclas()
{
	SDL_Event Events;
	while (SDL_PollEvent(&Events)) {
		switch (Events.type) {
		case SDL_KEYDOWN:
			if (Events.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {

				SDL_Quit();
			}
			break;

		case SDL_QUIT:
			endgame = true;
			break;
		}

	}
}

void Controles::lecturaTeclas(int a)
{
	if (a == 1) {
		endgame = true;
	}
}

