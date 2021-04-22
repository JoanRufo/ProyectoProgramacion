#pragma once
#include "SDL.h"
#include <iostream>
class Controles
{
	bool endgame = false;
public:
	Controles();
	~Controles();
	void capturaTeclas();
	void lecturaTeclas(int a);

};

