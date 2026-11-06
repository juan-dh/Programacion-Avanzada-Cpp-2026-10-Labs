// ForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

ForagerBlob::ForagerBlob(const glm::vec2& pos, const glm::vec2& vel, float energy, float radius)
    : Blob(pos, vel, energy, radius, ofColor(138, 201, 160)) {
}

void ForagerBlob::eatFood(float foodValue) {
    if (!alive) {
        return;
    }
    energy += foodValue;
    if (energy > 150.0f) {
        energy = 150.0f;
    }
}

void ForagerBlob::update() {
    Blob::update();
    if (!alive) {
        return;
    }
    consumeEnergy(0.02f);
}

void ForagerBlob::draw() const {
    // Reutilización directa del renderizado vectorial de Blob (sin barras añadidas)
    Blob::draw();
}
