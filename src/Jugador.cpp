#include "Jugador.h"
#include <SFML/Graphics.hpp>
using namespace sf;

Jugador::Jugador(Vector2f size)
{
    jugador.setSize(size);
    jugador.setFillColor(Color::Green);
}
 void Jugador::move(Vector2f dir)
{
    jugador.move(dir);
}

int Jugador::getX()
{
    return jugador.getPosition().x;
}

int Jugador::getY()
{
    return jugador.getPosition().y;
}
int Jugador::getRight()
{
    return jugador.getPosition().x + jugador.getSize().x;
}
int Jugador::getTop()
{
    return jugador.getPosition().y;
}
int Jugador::getBottom()
{
    return jugador.getPosition().y + jugador.getSize().y;
}

void Jugador::draw(RenderWindow &window)
{
    window.draw(jugador);
}
