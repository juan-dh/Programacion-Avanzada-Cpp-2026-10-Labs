// Blob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 2: Clasificación de Derivación
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"

Blob::Blob() : x(0.0f), y(0.0f), energy(100.0f), alive(true) {
    std::cout << "Constructor Blob\n";
}

Blob::Blob(float xVal, float yVal, float energyVal)
    : x(xVal), y(yVal), energy(energyVal), alive(energyVal > 0.0f) {
    std::cout << "Constructor Blob\n";
}

Blob::~Blob() {
    std::cout << "Destructor Blob\n";
}

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
