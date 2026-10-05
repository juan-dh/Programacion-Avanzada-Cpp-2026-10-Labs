// Particle.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update()
{
    position += velocity; // Modificación in-place directa mediante operator+=
}

void Particle::checkEdges(float width, float height)
{
    // Rebote en paredes laterales (eje X)
    if (position.getX() > width - radius)
    {
        position.setX(width - radius);
        velocity.setX(-velocity.getX());
    }
    else if (position.getX() < radius)
    {
        position.setX(radius);
        velocity.setX(-velocity.getX());
    }

    // Rebote en suelo y techo (eje Y)
    if (position.getY() > height - radius)
    {
        position.setY(height - radius);
        velocity.setY(-velocity.getY());
    }
    else if (position.getY() < radius)
    {
        position.setY(radius);
        velocity.setY(-velocity.getY());
    }
}

void Particle::show() const
{
    ofSetColor(color);
    ofFill();
    ofDrawCircle(position.getX(), position.getY(), radius);
}
