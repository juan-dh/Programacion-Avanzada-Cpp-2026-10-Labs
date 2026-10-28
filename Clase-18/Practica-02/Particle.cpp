// Particle.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Regla de las Tres e Indexación (Consola)
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"

Particle::Particle(float startX, float startY, float vx, float vy, float r)
    : position(startX, startY), velocity(vx, vy), radius(r) {}

Particle::Particle(const Vector2D& pos, const Vector2D& vel, float r)
    : position(pos), velocity(vel), radius(r) {}

void Particle::update() {
    position += velocity;
}

std::ostream& operator<<(std::ostream& os, const Particle& p) {
    os << "Particle(Pos: " << p.position << ", Vel: " << p.velocity << ", R: " << p.radius << ")";
    return os;
}
