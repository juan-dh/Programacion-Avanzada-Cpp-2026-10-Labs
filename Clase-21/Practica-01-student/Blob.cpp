// Blob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"

Blob::Blob() : x(0.0f), y(0.0f), energy(100.0f), alive(true) {
    std::cout << "Constructor Blob\n";
}

// TODO: Constructor parametrizado de Blob
// 1. Inicializa x, y, energy y alive en la lista de inicialización.
// 2. Emite por consola: "Constructor Blob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: Destructor de Blob
// Emite por consola: "Destructor Blob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

float Blob::getX() const { return x; }
float Blob::getY() const { return y; }
float Blob::getEnergy() const { return energy; }
bool Blob::isAlive() const { return alive; }

void Blob::consumeEnergy(float amount) {
    energy -= amount;
    if (energy <= 0.0f) {
        energy = 0.0f;
        alive = false;
    }
}
