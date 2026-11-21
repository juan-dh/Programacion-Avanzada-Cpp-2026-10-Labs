// Blob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef BLOB_H
#define BLOB_H

#include "IBeing.h"
#include <iostream>

// TODO: Derivación pública desde IBeing
// Haz que Blob herede públicamente de IBeing (: public IBeing).
// Mantén a Blob como clase abstracta implementando isActive() pero sin implementar update() ni getLabel().
class Blob : public IBeing {
protected:
    float x{0.0f};
    float y{0.0f};
    float energy{100.0f};
    bool alive{true};

public:
    Blob();
    Blob(float xVal, float yVal, float energyVal);
    ~Blob() override;

    float getX() const;
    float getY() const;
    float getEnergy() const;

    // TODO: Sobrescritura parcial del contrato
    // Declara bool isActive() const override; (el cuerpo en Blob.cpp retorna alive).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    void consumeEnergy(float amount);
};

#endif // BLOB_H
