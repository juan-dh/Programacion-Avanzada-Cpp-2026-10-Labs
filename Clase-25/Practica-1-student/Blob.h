// Blob.h
// Práctica 1: Iteradores y Eliminación Segura en Contenedores Secuenciales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef BLOB_H
#define BLOB_H

#include "IBeing.h"
#include <iostream>

class Blob : public IBeing {
protected:
    float x{0.0f};
    float y{0.0f};
    float energy{100.0f};
    bool alive{true};

public:
    Blob();
    Blob(float xVal, float yVal, float energyVal);
    ~Blob() override = default;

    float getX() const;
    float getY() const;
    float getEnergy() const;
    bool isActive() const override;

    void consumeEnergy(float amount);
};

#endif // BLOB_H
