#pragma once
#include "SDL.h"
#include <iostream>
#include <stdio.h>
class Personaje
{
	int Movx;
	int Movy;

public:
	void init();
	void update();
	void render();

};

