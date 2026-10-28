// Particle.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 1: Operadores new y delete
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "Vector2D.h"

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{12.0f};
    ofColor color{255, 255, 255};

public:
    Particle() = default;
    Particle(float startX, float startY, float vx, float vy, 
             float r = 12.0f, ofColor c = ofColor(255, 255, 255));

    void update();
    void checkEdges(float width, float height);
    void show() const;

    // Condición de salida: la partícula escapa por la abertura inferior
    bool isOutOfBounds(float width, float height) const;

    const Vector2D& getPosition() const { return position; }
    void setPosition(const Vector2D& newPos) { position = newPos; }
    const Vector2D& getVelocity() const { return velocity; }
    float getRadius() const { return radius; }
    const ofColor& getColor() const { return color; }
};

#endif // PARTICLE_H
