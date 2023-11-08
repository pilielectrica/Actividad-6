#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
#pragma once
class Enemigos
{
private:
	Sprite enemigo;
	Texture enemigotexture;
	Clock clock;
	int randomnumber3;
	int randomnumber4;
	float randomclock = 0.1f;
	
public:
	Sprite aparecer();
	void moverse();
	void setearenemigo();
	void mostrarPosicion();
};

