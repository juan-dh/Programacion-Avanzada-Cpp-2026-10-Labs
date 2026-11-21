// PredatorBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "PredatorBlob.h"

PredatorBlob::PredatorBlob() : Blob(), huntPower(25.0f) {}

PredatorBlob::PredatorBlob(float xVal, float yVal, float energyVal, float powerVal)
    : Blob(xVal, yVal, energyVal), huntPower(powerVal) {}

PredatorBlob::~PredatorBlob() {
    std::cout << "[~PredatorBlob] Depredador eliminado\n";
}

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
    std::cout << "[" << getLabel() << "] Acecha en (" << x << ", " << y
              << ") con poder " << huntPower << " | Energia: " << energy << "\n";
}

std::string PredatorBlob::getLabel() const {
    return "PredatorBlob";
}
