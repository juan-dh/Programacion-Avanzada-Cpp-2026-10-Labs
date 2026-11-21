// ForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

ForagerBlob::ForagerBlob() : Blob() {}

ForagerBlob::ForagerBlob(float xVal, float yVal, float energyVal)
    : Blob(xVal, yVal, energyVal) {}

ForagerBlob::~ForagerBlob() {
    std::cout << "[~ForagerBlob] Recolector eliminado\n";
}

void ForagerBlob::eatFood(float amount) {
    energy += amount;
}

void ForagerBlob::update() {
    if (!alive) {
        return;
    }
    x += 1.5f;
    y += 1.0f;
    consumeEnergy(1.5f);
    eatFood(4.0f);
    std::cout << "[" << getLabel() << "] Posicion: (" << x << ", " << y
              << ") | Energia: " << energy << "\n";
}

std::string ForagerBlob::getLabel() const {
    return "ForagerBlob";
}
