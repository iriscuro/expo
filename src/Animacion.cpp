#include "Animacion.h"

#include <SFML/Graphics.hpp>
using namespace sf;
Animacion::Animacion(Texture &t, int x, int y, int w, int h, int count, float Speed, int step)
{
        speed = Speed;
        sprite.setTexture(t);

        currentFrame = 0;
        isPlaying=true;
        flip=false;

        for (int i=0; i<count; i++){
            frames.push_back ( IntRect(x+i*step, y, w, h));
            frames_flip.push_back( IntRect(x+i*step+w, y, -w, h));
        }
}

void Animacion:: tick(float time)
    {
        if (!isPlaying) return;

        currentFrame += speed * time;

        if (currentFrame > frames.size())
            currentFrame -=frames.size();

        int i = currentFrame;
        sprite.setTextureRect(frames[i]);
        if (flip) sprite.setTextureRect( frames_flip[i]);
    }

