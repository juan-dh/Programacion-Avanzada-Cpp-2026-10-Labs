// ParticleSystem.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(const Vector2D& startOrigin)
    : origin(startOrigin) {}

void ParticleSystem::addParticle() {
    float vx = ofRandom(-4.0f, 4.0f);
    float vy = ofRandom(-4.0f, 4.0f);
    float r = ofRandom(10.0f, 18.0f);
    ofColor col = ofColor::fromHsb(ofRandom(0, 255), 210, 255);

    particles.push_back(Particle(origin.getX(), origin.getY(), vx, vy, r, col));
}

void ParticleSystem::update(float width, float height) {
    for (auto& p : particles) {
        p.update();
        p.checkEdges(width, height);
    }
}

void ParticleSystem::draw() const {
    for (const auto& p : particles) {
        p.show();
    }
}
