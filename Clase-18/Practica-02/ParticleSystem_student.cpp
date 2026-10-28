// ParticleSystem_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Regla de las Tres e Indexación (Consola)
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ParticleSystem.h"

// ==========================================
// REGLA DE LAS TRES (THE RULE OF THREE)
// ==========================================

// TODO: 1. Destructor
// Invoca clear() para destruir todas las partículas alojadas en el Heap y prevenir fugas de memoria.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: 2. Constructor de Copias (Copia Profunda - Deep Copy)
// 1. Reserva espacio con particles.reserve(other.particles.size()).
// 2. Itera sobre other.particles y para cada puntero no nulo, instancia un nuevo objeto en el Heap:
//    particles.push_back(new Particle(*p));
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: 3. Operador de Asignación (Copia Profunda)
// 1. Verifica autoasignación: if (this == &rhs) return *this;
// 2. Libera la memoria existente: clear();
// 3. Realiza la copia profunda de rhs.particles en el Heap reservando espacio e instanciando con new Particle(*p).
// 4. Retorna *this;
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// ==========================================
// OPERADORES DE INDEXACIÓN
// ==========================================

// TODO: 4. Operador de indexación no constante (mutable)
// Valida si 'index >= particles.size()'. Si está fuera de rango retorna nullptr, sino retorna particles[index].
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: 5. Operador de indexación constante (solo lectura)
// Retorna 'const Particle*'. Si 'index >= particles.size()' retorna nullptr, sino particles[index].
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// ==========================================
// MÉTODOS DE GESTIÓN
// ==========================================

void ParticleSystem::addParticle(float x, float y) {
    particles.push_back(new Particle(x, y));
}

void ParticleSystem::clear() {
    for (Particle* p : particles) {
        delete p;
    }
    particles.clear();
}
