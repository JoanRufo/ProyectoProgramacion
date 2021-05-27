#include "EnemigoFinal.h"



EnemigoFinal::EnemigoFinal()
{
}


EnemigoFinal::~EnemigoFinal()
{
}

void EnemigoFinal::init()
{
	idDelEnemigoFinal = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque1 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque2 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque3 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque4 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque5 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque6 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque7 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque8 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque9 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");
	idDelEnemigoPeque10 = mResourceManager->loadAndGetGraphicID("Imagenes/EnemigoFinal.png");


	


	posX = 600;
	posY = 200;
	posX1 = 400;
	posY1 = 200;
	posX2 = 420;
	posY2 = 250;
	posX3 = 440;
	posY3 = 300;
	posX4 = 460;
	posY4 = 350;
	posX5 = 480;
	posY5 = 400;
	posX6 = 720;
	posY6 = 450;
	posX7 = 740;
	posY7 = 500;
	posX8 = 760;
	posY8 = 500;
	posX9 = 780;
	posY9 = 530;
	posX10 = 800;
	posY10 = 550;


	vel = 0.1;
	vel1 = 0.12;
	vel2 = 0.13;
	vel3 = 0.14;
	vel4 = 0.15;
	vel5 = 0.16;
	vel6 = 0.17;
	vel7 = 0.18;
	vel8 = 0.19;
	vel9 = 0.2;
	vel10 = 0.25;

}

void EnemigoFinal::update()
{
}

void EnemigoFinal::render()
{
	mVideo->renderGraphic(idDelEnemigoFinal, posX, posY, 200, 150);
	mVideo->renderGraphic(idDelEnemigoFinal, posX1, posY1, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX2, posY2, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX3, posY3, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX4, posY4, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX5, posY5, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX6, posY6, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX7, posY7, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX8, posY8, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX9, posY9, 80, 60);
	mVideo->renderGraphic(idDelEnemigoFinal, posX10, posY10, 80, 60);
}

void EnemigoFinal::movEnemigo()
{
	if (posX <= mPersonaje->Posx) {

		posX = posX + 0.5 * vel;

	}

	else if (posX >= mPersonaje->Posx) {

		posX = posX - 0.5 * vel;

	}

	if (posY <= mPersonaje->Posy) {

		posY = posY + 0.5 * vel;

	}

	else if (posY >= mPersonaje->Posy) {

		posY = posY - 0.5 * vel;


	}

	//Enemigo peque1
	if (posX1 <= mPersonaje->Posx) {

		posX1 = posX + 0.5 * vel1;

	}

	else if (posX1 >= mPersonaje->Posx) {

		posX1 = posX1 - 0.5 * vel1;

	}

	if (posY1 <= mPersonaje->Posy) {

		posY1 = posY1 + 0.5 * vel1;

	}

	else if (posY1 >= mPersonaje->Posy) {

		posY1 = posY1 - 0.5 * vel1;


	}

	//Enemigo peque2
	if (posX2 <= mPersonaje->Posx) {

		posX2 = posX2 + 0.5 * vel2;

	}

	else if (posX >= mPersonaje->Posx) {

		posX2 = posX2 - 0.5 * vel2;

	}

	if (posY <= mPersonaje->Posy) {

		posY2 = posY2 + 0.5 * vel2;

	}

	else if (posY >= mPersonaje->Posy) {

		posY2 = posY2 - 0.5 * vel2;


	}

	//Enemigo peque3
	if (posX3 <= mPersonaje->Posx) {

		posX3 = posX + 0.5 * vel3;

	}

	else if (posX >= mPersonaje->Posx) {

		posX3 = posX3 - 0.5 * vel3;

	}

	if (posY <= mPersonaje->Posy) {

		posY3 = posY3 + 0.5 * vel3;

	}

	else if (posY3 >= mPersonaje->Posy) {

		posY3 = posY3 - 0.5 * vel3;


	}

	//Enemigo peque4
	if (posX4 <= mPersonaje->Posx) {

		posX4 = posX + 0.5 * vel4;

	}

	else if (posX >= mPersonaje->Posx) {

		posX = posX - 0.5 * vel;

	}

	if (posY4 <= mPersonaje->Posy) {

		posY4 = posY + 0.5 * vel4;

	}

	else if (posY4 >= mPersonaje->Posy) {

		posY4 = posY4 - 0.5 * vel4;


	}

	//Enemigo peque5
	if (posX5 <= mPersonaje->Posx) {

		posX5 = posX5 + 0.5 * vel5;

	}

	else if (posX >= mPersonaje->Posx) {

		posX5 = posX5 - 0.5 * vel5;

	}

	if (posY5 <= mPersonaje->Posy) {

		posY5 = posY5 + 0.5 * vel5;

	}

	else if (posY5 >= mPersonaje->Posy) {

		posY5 = posY5 - 0.5 * vel5;


	}

	//Enemigo peque6
	if (posX6 <= mPersonaje->Posx) {

		posX6 = posX6 + 0.5 * vel6;

	}

	else if (posX >= mPersonaje->Posx) {

		posX6 = posX6 - 0.5 * vel6;

	}

	if (posY6 <= mPersonaje->Posy) {

		posY6 = posY6 + 0.5 * vel6;

	}

	else if (posY >= mPersonaje->Posy) {

		posY6 = posY6 - 0.5 * vel;


	}

	//Enemigo peque7
	if (posX7 <= mPersonaje->Posx) {

		posX7 = posX7 + 0.5 * vel7;

	}

	else if (posX >= mPersonaje->Posx) {

		posX7 = posX7 - 0.5 * vel7;

	}

	if (posY <= mPersonaje->Posy) {

		posY7 = posY7 + 0.5 * vel7;

	}

	else if (posY7 >= mPersonaje->Posy) {

		posY7 = posY7 - 0.5 * vel7;


	}

	//Enemigo peque8
	if (posX8 <= mPersonaje->Posx) {

		posX8 = posX8 + 0.5 * vel8;

	}

	else if (posX8 >= mPersonaje->Posx) {

		posX8 = posX8 - 0.5 * vel8;

	}

	if (posY8 <= mPersonaje->Posy) {

		posY8 = posY + 0.5 * vel8;

	}

	else if (posY8 >= mPersonaje->Posy) {

		posY8 = posY8 - 0.5 * vel8;


	}

	//Enemigo peque9
	if (posX9 <= mPersonaje->Posx) {

		posX9 = posX9 + 0.5 * vel9;

	}

	else if (posX9 >= mPersonaje->Posx) {

		posX9 = posX9 - 0.5 * vel9;

	}

	if (posY <= mPersonaje->Posy) {

		posY9 = posY9 + 0.5 * vel9;

	}

	else if (posY9 >= mPersonaje->Posy) {

		posY9 = posY9 - 0.5 * vel9;


	}

	//Enemigo peque10
	if (posX10 <= mPersonaje->Posx) {

		posX10 = posX10 + 0.5 * vel10;

	}

	else if (posX10 >= mPersonaje->Posx) {

		posX = posX - 0.5 * vel10;

	}

	if (posY10 <= mPersonaje->Posy) {

		posY10 = posY10 + 0.5 * vel10;

	}

	else if (posY10 >= mPersonaje->Posy) {

		posY10 = posY10 - 0.5 * vel10;


	}
}
