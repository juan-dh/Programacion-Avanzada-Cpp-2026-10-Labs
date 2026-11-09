// Blob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 2: Clasificación de Derivación
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef BLOB_H
#define BLOB_H

#include <iostream>

class Blob {
protected:
    float x{0.0f};
    float y{0.0f};
    float energy{100.0f};
    bool alive{true};

public:
    Blob();
    Blob(float xVal, float yVal, float energyVal);
    ~Blob();

    float getX() const;
    float getY() const;
    float getEnergy() const;
    bool isAlive() const;

    void consumeEnergy(float amount);
};

#endif // BLOB_H
