// PredatorBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 2: Pérdida de Tipo (Object Slicing) vs. Referencias
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PREDATORBLOB_H
#define PREDATORBLOB_H

#include "Blob.h"

class PredatorBlob : public Blob {
private:
    float huntPower{25.0f};

public:
    PredatorBlob();
    PredatorBlob(float xVal, float yVal, float energyVal, float powerVal);
    ~PredatorBlob();

    float getHuntPower() const;

    void update() override;
};

#endif // PREDATORBLOB_H
