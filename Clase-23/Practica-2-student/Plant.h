// Plant.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PLANT_H
#define PLANT_H

#include "IBeing.h"
#include <iostream>

class Plant : public IBeing {
private:
    float x{0.0f};
    float y{0.0f};
    float nutrients{30.0f};
    bool active{true};

public:
    Plant(float xVal, float yVal, float initialNutrients);

    // TODO: Implementación del contrato IBeing en Plant
    // Declara ~Plant(), update(), isActive() const y getLabel() const
    // utilizando en todos ellos el especificador override.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // PLANT_H
