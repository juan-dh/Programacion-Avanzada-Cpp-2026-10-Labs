// Particle.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"
#include <cmath>

// Inicialización obligatoria de la variable estática fuera de la clase (Regla ODR)
float Particle::maxSpeed = 8.0f;

void Particle::setMaxSpeed(float s) {
    if (s < 0.5f) {
        maxSpeed = 0.5f; // Límite inferior de seguridad
    } else if (s > 25.0f) {
        maxSpeed = 25.0f; // Límite superior de seguridad
    } else {
        maxSpeed = s;
    }
}

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update() {
    // Verificamos y limitamos la rapidez según el límite estático global
    float speedSq = velocity.getX() * velocity.getX() + velocity.getY() * velocity.getY();
    if (speedSq > maxSpeed * maxSpeed && speedSq > 0.0001f) {
        float currentSpeed = std::sqrt(speedSq);
        velocity = velocity * (maxSpeed / currentSpeed);
    }

    position += velocity; // Actualización in-place
}

void Particle::checkEdges(float width, float height) {
    if (position.getX() > width - radius) {
        position.setX(width - radius);
        velocity.setX(-velocity.getX());
    } else if (position.getX() < radius) {
        position.setX(radius);
        velocity.setX(-velocity.getX());
    }

    if (position.getY() > height - radius) {
        position.setY(height - radius);
        velocity.setY(-velocity.getY());
    } else if (position.getY() < radius) {
        position.setY(radius);
        velocity.setY(-velocity.getY());
    }
}

void Particle::show() const {
    ofSetColor(color);
    ofFill();
    ofDrawCircle(position.getX(), position.getY(), radius);
}
