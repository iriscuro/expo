#ifndef JUGADOR_H
#define JUGADOR_H
#include <SFML/Graphics.hpp>
using namespace sf;
class Jugador {
public:
    Jugador(Vector2f size);
    void move(Vector2f dir);

    int getX();

    int getY();
    int getRight();

    int getLeft();

    int getTop();

    int getBottom();


    void draw(RenderWindow &window);
private:
    RectangleShape jugador;
};

#endif // PLAYER_H
