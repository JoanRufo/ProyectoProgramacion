#pragma once
#include "SDL.h"
#include <iostream>
class Controles
{
public:
	Controles();
	~Controles();
	void capturaTeclas(bool *endgame);
};

