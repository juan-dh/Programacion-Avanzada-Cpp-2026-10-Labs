// Particle_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"

// TODO: Inicialización de la variable estática (Regla ODR)
// Define e inicializa la variable estática 'count' de la clase Particle con valor 0.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {
    // TODO: Incremento del censo en constructor parametrizado
    // Incrementa la variable estática 'count' en 1 para registrar la nueva partícula.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void Particle::update() {
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
