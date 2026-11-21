// Blob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"

Blob::Blob() : x(0.0f), y(0.0f), energy(100.0f), alive(true) {}

Blob::Blob(float xVal, float yVal, float energyVal)
    : x(xVal), y(yVal), energy(energyVal), alive(energyVal > 0.0f) {}

Blob::~Blob() {
    std::cout << "[~Blob] Destruyendo sub-objeto base en (" << x << ", " << y << ")\n";
}

float Blob::getX() const { return x; }
float Blob::getY() const { return y; }
float Blob::getEnergy() const { return energy; }
bool Blob::isActive() const { return alive; }

void Blob::consumeEnergy(float amount) {
    energy -= amount;
    if (energy <= 0.0f) {
        energy = 0.0f;
        alive = false;
    }
}
