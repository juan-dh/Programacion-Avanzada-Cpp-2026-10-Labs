// Particle_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"
#include <cmath>

// TODO: Inicialización obligatoria de la variable estática (Regla ODR)
// Define e inicializa la variable estática 'maxSpeed' de la clase Particle con el valor 8.0f.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: Implementación del método estático setMaxSpeed
// Valida que 's' no sea menor a 0.5f ni mayor a 25.0f, y asigna el valor resultante a 'maxSpeed'.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update() {
    // TODO: Limitar cinemáticamente la velocidad según el miembro estático maxSpeed
    // 1. Calcula la rapidez al cuadrado: float speedSq = velocity.getX()*velocity.getX() + velocity.getY()*velocity.getY();
    // 2. Si speedSq > maxSpeed * maxSpeed, escala la velocidad: velocity = velocity * (maxSpeed / std::sqrt(speedSq));
    // 3. Aplica position += velocity;
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
