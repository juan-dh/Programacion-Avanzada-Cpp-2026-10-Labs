// Particle.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Regla de las Tres e Indexación (Consola)
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include <iostream>
#include "Vector2D.h"

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{10.0f};

public:
    Particle() = default;
    Particle(float startX, float startY, float vx = 0.0f, float vy = 0.0f, float r = 10.0f);
    Particle(const Vector2D& pos, const Vector2D& vel, float r = 10.0f);

    void update();

    const Vector2D& getPosition() const { return position; }
    void setPosition(const Vector2D& newPos) { position = newPos; }

    const Vector2D& getVelocity() const { return velocity; }
    void setVelocity(const Vector2D& newVel) { velocity = newVel; }

    float getRadius() const { return radius; }
    void setRadius(float newRadius) { radius = newRadius; }

    friend std::ostream& operator<<(std::ostream& os, const Particle& p);
};

#endif // PARTICLE_H
