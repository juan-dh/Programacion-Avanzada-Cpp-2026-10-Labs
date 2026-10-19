// Particle.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "Vector2D.h"

class Particle
{
private:
    Vector2D position;
    Vector2D velocity;
    float radius{20.0f};
    ofColor color{255, 255, 255};

public:
    Particle() = default;
    Particle(float startX, float startY, float vx, float vy, float r = 20.0f, ofColor c = ofColor(255, 255, 255));

    void update();
    void checkEdges(float width, float height);
    void show() const;

    const Vector2D &getPosition() const { return position; }
    float getRadius() const { return radius; }
};

#endif // PARTICLE_H
