// ParticleSystem.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 1: Operadores new y delete
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include <vector>
#include <cstddef>
#include "Particle.h"
#include "Vector2D.h"

class ParticleSystem {
private:
    Vector2D origin;
    std::vector<Particle*> particles;

public:
    ParticleSystem() = default;
    ParticleSystem(const Vector2D& startOrigin);
    ~ParticleSystem(); // Destructor para evitar fugas de memoria

    void addParticle(float x, float y);
    void update(float width, float height);
    void draw() const;
    void clear();

    size_t getParticleCount() const { return particles.size(); }
};

#endif // PARTICLESYSTEM_H
