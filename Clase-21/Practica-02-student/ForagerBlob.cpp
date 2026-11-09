// ForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 2: Clasificación de Derivación
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

ForagerBlob::ForagerBlob() : Blob() {
    std::cout << "Constructor ForagerBlob\n";
}

ForagerBlob::ForagerBlob(float xVal, float yVal, float energyVal)
    : Blob(xVal, yVal, energyVal) {
    std::cout << "Constructor ForagerBlob\n";
}

ForagerBlob::~ForagerBlob() {
    std::cout << "Destructor ForagerBlob\n";
}

void ForagerBlob::eatFood(float amount) {
    energy += amount;
}
