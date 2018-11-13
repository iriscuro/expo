#ifndef ANIMACION_H
#define ANIMACION_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Animacion
{
public:
    std::vector<IntRect> frames, frames_flip;
    float currentFrame, speed;
    bool flip, isPlaying;
    Sprite sprite;

    Animacion(Texture &t, int x, int y, int w, int h, int count, float Speed, int step);

    void tick(float time);
};


#endif
