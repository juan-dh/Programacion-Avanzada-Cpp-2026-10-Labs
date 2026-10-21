// Particle.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "Vector2D.h"
#include <iostream>

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{14.0f};
    ofColor color{255, 255, 255};

    // Miembro estático: límite global de rapidez compartido por todas las partículas
    static float maxSpeed;

public:
    Particle() = default;
    Particle(float startX, float startY, float vx, float vy, float r = 14.0f, ofColor c = ofColor(255, 255, 255));

    void update();
    void checkEdges(float width, float height);
    void show() const;

    const Vector2D& getPosition() const { return position; }
    const Vector2D& getVelocity() const { return velocity; }
    float getRadius() const { return radius; }

    // Métodos estáticos para consultar y modificar el límite de rapidez
    static float getMaxSpeed() { return maxSpeed; }
    static void setMaxSpeed(float s);
};

#endif // PARTICLE_H
