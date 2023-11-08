#include "Enemigos.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

void Enemigos::setearenemigo()
{
	enemigotexture.loadFromFile("et.png");
	enemigo.setTexture(enemigotexture);
	enemigo.setScale(0.05, 0.05);
}
Sprite Enemigos::aparecer()
{   
	return enemigo;
}
void Enemigos::mostrarPosicion()
{
	enemigo.getPosition();
}
void Enemigos::moverse()
{
    float tiempoPasado = clock.getElapsedTime().asSeconds();
    if (tiempoPasado >= randomclock) {
        randomnumber3 = rand() % 500;
        randomnumber4 = rand() % 500;
        enemigo.setPosition(randomnumber3, randomnumber4);
        randomclock = (rand() % 900 + 100) / 1000.0f;
        clock.restart();
    }
}