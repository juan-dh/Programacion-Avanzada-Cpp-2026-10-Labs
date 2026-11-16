// ForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

ForagerBlob::ForagerBlob() : Blob() {}

ForagerBlob::ForagerBlob(float xVal, float yVal, float energyVal)
    : Blob(xVal, yVal, energyVal) {}

ForagerBlob::~ForagerBlob() {}

void ForagerBlob::eatFood(float amount) {
    energy += amount;
}

// TODO: Implementación polimórfica de ForagerBlob::update()
// 1. Verifica si !alive; de ser así, retorna inmediatamente.
// 2. Desplaza x += 1.5f e y += 1.0f.
// 3. Consume energía con consumeEnergy(1.5f) y recolecta con eatFood(5.0f).
// 4. Imprime: "[ForagerBlob::update] Recolecta alimento en (" << x << ", " << y << ") | Energia: " << energy << "\n"
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===
