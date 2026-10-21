// ParticleSystem.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include <vector>
#include "Particle.h"
#include "Vector2D.h"

class ParticleSystem {
private:
    Vector2D origin;
    std::vector<Particle> particles;

public:
    ParticleSystem() = default;
    explicit ParticleSystem(const Vector2D& startOrigin);

    void addParticle();
    void update(float width, float height);
    void draw() const;

    const Vector2D& getOrigin() const { return origin; }
    size_t size() const { return particles.size(); }
};

#endif // PARTICLESYSTEM_H
