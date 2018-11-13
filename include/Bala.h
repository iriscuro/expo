#ifndef BALA_H
#define BALA_H
#include "Jugador.h"
#include <SFML/Graphics.hpp>
using namespace std;
class Bala {
public:
    Bala(Vector2f size);

    void fire(int speed);

    int getRight();

    int getLeft();

    int getTop();

    int getBottom();

    void draw(RenderWindow &window);

    void setPos(Vector2f newPos);

private:
    RectangleShape bala;
};

#endif // BULLET_H
