// ParticleSystem.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Regla de las Tres e Indexación (Consola)
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLESYSTEM_H
#define PARTICLESYSTEM_H

#include <vector>
#include <cstddef>
#include "Particle.h"
#include "Vector2D.h"

class ParticleSystem {
private:
    std::vector<Particle*> particles; // Punteros a partículas dinámicas en el Heap

public:
    ParticleSystem() = default;

    // ==========================================
    // REGLA DE LAS TRES (THE RULE OF THREE)
    // ==========================================
    // 1. Destructor: libera la memoria de cada objeto Particle alojado en el Heap
    ~ParticleSystem();

    // 2. Constructor de Copias: garantiza copia profunda (Deep Copy)
    ParticleSystem(const ParticleSystem& other);

    // 3. Operador de Asignación: copia profunda protegiendo contra autoasignación
    ParticleSystem& operator=(const ParticleSystem& rhs);

    // ==========================================
    // OPERADORES DE INDEXACIÓN
    // ==========================================
    // Versión no constante: permite inspeccionar o modificar la partícula indexada
    Particle* operator[](size_t index);

    // Versión constante: garantiza acceso de solo lectura en contextos const
    const Particle* operator[](size_t index) const;

    // Métodos de gestión
    void addParticle(float x, float y);
    void clear();
    size_t getParticleCount() const { return particles.size(); }
};

#endif // PARTICLESYSTEM_H
