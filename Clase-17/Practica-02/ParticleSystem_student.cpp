// ParticleSystem_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17 - Práctica 2: Sistema de Partículas
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(const Vector2D& startOrigin)
    : origin(startOrigin) {}

void ParticleSystem::addParticle() {
    // TODO: Generación y agregado de una partícula al emisor
    // 1. Calcula velocidades variadas: float vx = ofRandom(-4.0f, 4.0f); float vy = ofRandom(-4.0f, 4.0f);
    // 2. Define radio y color: float r = ofRandom(10.0f, 18.0f); ofColor col = ofColor::fromHsb(ofRandom(0, 255), 210, 255);
    // 3. Añade la nueva partícula en 'origin' al vector 'particles' usando push_back:
    //    particles.push_back(Particle(origin.getX(), origin.getY(), vx, vy, r, col));
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::update(float width, float height) {
    // TODO: Actualización coordinada de la colección de partículas
    // Itera con un range-based for sobre 'particles' actualizando su cinemática y controlando bordes.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ParticleSystem::draw() const {
    // TODO: Renderizado coordinado de la colección de partículas
    // Itera con un range-based for constante sobre 'particles' invocando show() en cada una.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
