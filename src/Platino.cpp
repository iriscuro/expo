#include "Platino.h"
#include <SFML/Graphics.hpp>
#include "Bala.h"
using namespace sf;


Platino::Platino(Vector2f size)
{
   pla.setSize(size);
   pla.setFillColor(Color::Blue);
}

void Platino::setPos(Vector2f newPos)
{
    pla.setPosition(newPos);
}

void Platino::colicion(Jugador jugador )
{
    if (jugador.getRight() > pla.getPosition().x && jugador.getTop() < pla.getPosition().y + pla.getSize().y && jugador.getBottom() > pla.getPosition().y)
    {
            pla.setPosition(sf::Vector2f(4234432, 4234423));

    }

}
void Platino::draw(RenderWindow &window)
{
    window.draw(pla);
}
