#pragma once
#include "SDL.h"
#include <iostream>
class Controles
{
public:
	Controles();
	~Controles();
	void capturaTeclas();
	bool lecturaTeclas(int a);
	bool teclasPulsadas[6];
	enum teclas { W, A, S, D, Espacio, ESC, ENTER, R, Q };
	bool endgame = false;
	static Controles* getInstance();
	static Controles*		pInstance;
};

