// ParticleSystem_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 1: Operadores new y delete
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(const Vector2D& startOrigin)
    : origin(startOrigin) {}

ParticleSystem::~ParticleSystem() {
    // TODO: Destructor - invoca clear() para liberar todas las partículas activas
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::clear() {
    // TODO: Liberación masiva de partículas con delete
    // 1. Recorre 'particles' y aplica 'delete' a cada puntero Particle*.
    // 2. Vacía el vector llamando a particles.clear().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::addParticle(float x, float y) {
    // TODO: Reserva de memoria dinámica con el operador new
    // 1. Calcula velocidades aleatorias: float vx = ofRandom(-3.0f, 3.0f); float vy = ofRandom(1.0f, 5.0f);
    // 2. Define radio y color: float r = ofRandom(8.0f, 16.0f); ofColor col = ofColor::fromHsb(ofRandom(0, 255), 210, 255);
    // 3. Emplea el operador new para instanciar en el Heap y agrega el puntero con push_back:
    //    particles.push_back(new Particle(x, y, vx, vy, r, col));
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::update(float width, float height) {
    // TODO: Reciclaje continuo con el operador delete
    // 1. Recorre 'particles' usando un iterador (auto it = particles.begin(); it != particles.end(); ).
    // 2. Invoca (*it)->update(); y (*it)->checkEdges(width, height);
    // 3. Si (*it)->isOutOfBounds(width, height):
    //      - delete *it; // Liberación en el Heap
    //      - it = particles.erase(it); // Extracción segura
    //    En caso contrario:
    //      - ++it;
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::draw() const {
    // TODO: Renderizado de partículas
    // Recorre 'particles' e invoca p->show() en cada una.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
