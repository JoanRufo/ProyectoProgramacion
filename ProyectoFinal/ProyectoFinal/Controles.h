#pragma once
#include "SDL.h"
#include <iostream>
class Controles
{
	bool endgame = false;
	enum teclas{W,A,S,D,Espacio,ESC};
	bool teclasPulsadas[6];
public:
	Controles();
	~Controles();
	void capturaTeclas();
	bool lecturaTeclas(int a);

};

