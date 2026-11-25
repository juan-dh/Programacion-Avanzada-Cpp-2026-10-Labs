// ForagerBlob.h
// Práctica 1: Iteradores y Eliminación Segura en Contenedores Secuenciales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef FORAGERBLOB_H
#define FORAGERBLOB_H

#include "Blob.h"

class ForagerBlob : public Blob {
public:
    ForagerBlob();
    ForagerBlob(float xVal, float yVal, float energyVal);
    ~ForagerBlob() override = default;

    void eatFood(float amount);
    void update() override;
    std::string getLabel() const override;
};

#endif // FORAGERBLOB_H
