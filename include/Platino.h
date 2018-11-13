#ifndef PLATINO_H
#define PLATINO_H
#include "Bala.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Platino {
public:
    Platino(Vector2f size);

    void setPos(Vector2f newPos);

    void colicion(Jugador jugador);

    void draw(RenderWindow &window);

private:
    RectangleShape pla;
};


#endif // ENEMY_H
