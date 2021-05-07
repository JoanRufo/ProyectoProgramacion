#include "Controles.h"

Controles* Controles::pInstance = NULL;

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
			if (Events.key.keysym.scancode == SDL_SCANCODE_W) {

				teclasPulsadas[W] = true;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_A) {

				teclasPulsadas[A] = true;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_S) {

				teclasPulsadas[S] = true;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_D) {

				teclasPulsadas[D] = true;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_SPACE) {

				teclasPulsadas[Espacio] = true;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {

				SDL_Quit();
			}
			break;
		case SDL_KEYUP:
			if (Events.key.keysym.scancode == SDL_SCANCODE_W) {

				teclasPulsadas[W] = false;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_A) {

				teclasPulsadas[A] = false;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_S) {

				teclasPulsadas[S] = false;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_D) {

				teclasPulsadas[D] = false;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_SPACE) {

				teclasPulsadas[Espacio] = false;
			}
			else if (Events.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {

				SDL_Quit();
			}
			break;

		case SDL_QUIT:
			endgame = true;
			break;
		}

	}
}

bool Controles::lecturaTeclas(int a)
{
	return teclasPulsadas[a];
}

Controles * Controles::getInstance()
{
	if (pInstance == NULL) {
		pInstance = new Controles();
	}
	return pInstance;
}

