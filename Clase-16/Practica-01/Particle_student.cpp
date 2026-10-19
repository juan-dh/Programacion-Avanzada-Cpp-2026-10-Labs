// Particle_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update() {
    // TODO: Actualización cinemática in-place
    // Modifica la posición sumando directamente el vector velocidad mediante el operador sobrecargado +=:
    // position += velocity;
    // Esto evita la creación y destrucción de objetos temporales en memoria.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
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
