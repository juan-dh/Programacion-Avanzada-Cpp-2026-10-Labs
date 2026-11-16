// PredatorBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 2: Pérdida de Tipo (Object Slicing) vs. Referencias
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "PredatorBlob.h"

PredatorBlob::PredatorBlob() : Blob(), huntPower(25.0f) {}

PredatorBlob::PredatorBlob(float xVal, float yVal, float energyVal, float powerVal)
    : Blob(xVal, yVal, energyVal), huntPower(powerVal) {}

PredatorBlob::~PredatorBlob() {}

float PredatorBlob::getHuntPower() const {
    return huntPower;
}

void PredatorBlob::update() {
    if (!alive) {
        return;
    }
    x += 3.0f;
    y += 2.0f;
    consumeEnergy(4.5f);
    std::cout << "[PredatorBlob::update] Acecha en (" << x << ", " << y
              << ") con poder " << huntPower << " | Energia: " << energy << "\n";
}
