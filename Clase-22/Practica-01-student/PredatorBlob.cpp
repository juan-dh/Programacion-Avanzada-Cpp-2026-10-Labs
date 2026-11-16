// PredatorBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "PredatorBlob.h"

PredatorBlob::PredatorBlob() : Blob(), huntPower(25.0f) {}

PredatorBlob::PredatorBlob(float xVal, float yVal, float energyVal, float powerVal)
    : Blob(xVal, yVal, energyVal), huntPower(powerVal) {}

PredatorBlob::~PredatorBlob() {}

float PredatorBlob::getHuntPower() const {
    return huntPower;
}

// TODO: Implementación polimórfica de PredatorBlob::update()
// 1. Verifica si !alive; de ser así, retorna inmediatamente.
// 2. Desplaza x += 3.0f e y += 2.0f.
// 3. Consume energía con consumeEnergy(4.5f).
// 4. Imprime: "[PredatorBlob::update] Acecha en (" << x << ", " << y << ") con poder " << huntPower << " | Energia: " << energy << "\n"
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===
