#include "Bala.h"
#include "Jugador.h"
#include "Platino.h"
#include <SFML/Graphics.hpp>
using namespace sf;
Bala::Bala(Vector2f size)
{
    bala.setSize(size);
    bala.setFillColor(Color::Red);
}

 void Bala::fire(int speed)
{
    bala.move(speed, 0);
}

int Bala::getRight()
{
    return bala.getPosition().x + bala.getSize().x;
}
int Bala::getTop()
{
    return bala.getPosition().y;
}
int Bala::getBottom()
{
    return bala.getPosition().y + bala.getSize().y;
}

void Bala::draw(RenderWindow &window)
{
    window.draw(bala);
}

void Bala::setPos(Vector2f newPos)
{
    bala.setPosition(newPos);
}
