// Particle_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Particle.h"

// Constructor con lista de inicialización incluyendo color
Particle::Particle(float startX, float startY, float vx, float vy, float r, ofColor c)
    : position(startX, startY), velocity(vx, vy), radius(r), color(c) {}

void Particle::update() {
    // TODO: Actualización cinemática con suma vectorial
    // Actualiza la posición sumando el vector velocidad mediante el operador sobrecargado +:
    // Pista: Usa notación algebraica natural: position = position + velocity;
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void Particle::checkEdges(float width, float height) {
    // Rebote en paredes laterales (eje X) - Provisto como referencia
    if (position.getX() > width - radius) {
        position.setX(width - radius);
        velocity.setX(-velocity.getX());
    } else if (position.getX() < radius) {
        position.setX(radius);
        velocity.setX(-velocity.getX());
    }

    // TODO: Rebote en límites verticales (eje Y)
    // Completa el rebote en suelo y techo invirtiendo la componente Y de la velocidad.
    // Si la posición Y supera height - radius, asigna height - radius e invierte con setY(-velocity.getY()).
    // Si la posición Y es menor a radius, asigna radius e invierte con setY(-velocity.getY()).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

// TODO: Renderizado encapsulado de la partícula
// Implementa el método show() constante para dibujar la entidad:
// 1. Establece el color de dibujo con ofSetColor(color).
// 2. Rellena la figura con ofFill().
// 3. Dibuja el círculo en position.getX(), position.getY() con radio radius mediante ofDrawCircle.
// === TU CODIGO EMPIEZA AQUI ===
void Particle::show() const {

}
// === TU CODIGO TERMINA AQUI ===
