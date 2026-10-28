// Particle.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 1: Operadores new y delete
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"
#include <cmath>

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update() {
    position += velocity; // Actualización cinemática in-place
}

void Particle::checkEdges(float width, float height) {
    // Rebote en paredes laterales (eje X)
    if (position.getX() > width - radius) {
        position.setX(width - radius);
        velocity.setX(-velocity.getX());
    } else if (position.getX() < radius) {
        position.setX(radius);
        velocity.setX(-velocity.getX());
    }

    // Rebote en el techo (eje Y superior)
    if (position.getY() < radius) {
        position.setY(radius);
        velocity.setY(-velocity.getY());
    }

    // ¡El suelo (eje Y inferior) queda ABIERTO sin rebote!
    // Las partículas continúan descendiendo hasta salir de la pantalla.
}

bool Particle::isOutOfBounds(float width, float height) const {
    return position.getY() > height + radius;
}

void Particle::show() const {
    ofSetColor(color);
    ofFill();
    ofDrawCircle(position.getX(), position.getY(), radius);
}
