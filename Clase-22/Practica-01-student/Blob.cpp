// Blob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"

Blob::Blob() : x(0.0f), y(0.0f), energy(100.0f), alive(true) {}

Blob::Blob(float xVal, float yVal, float energyVal)
    : x(xVal), y(yVal), energy(energyVal), alive(energyVal > 0.0f) {}

Blob::~Blob() {}

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

void Blob::update() {
    if (!alive) {
        return;
    }
    x += 1.0f;
    y += 1.0f;
    consumeEnergy(2.0f);
    std::cout << "[Blob::update] Posicion: (" << x << ", " << y
              << ") | Energia: " << energy << "\n";
}
