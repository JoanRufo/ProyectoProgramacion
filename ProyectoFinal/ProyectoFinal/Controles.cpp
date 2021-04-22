#include "Controles.h"



Controles::Controles()
{

}


Controles::~Controles()
{
}

void Controles::capturaTeclas(bool *endgame)
{
	endgame = false;
	while (endgame == false) {
		SDL_Event Events;
		while (SDL_PollEvent(&Events)) {
			switch (Events.type) {
			case SDL_KEYDOWN:
				if (Events.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {

					SDL_Quit();
				}
				break;

			case SDL_QUIT:
				*endgame = true;
				break;
			}

		}
	}
}

