// FlowerForagerBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef FLOWERFORAGERBLOB_H
#define FLOWERFORAGERBLOB_H

#include "ForagerBlob.h"

// Segunda derivación: FlowerForagerBlob hereda de ForagerBlob
class FlowerForagerBlob : public ForagerBlob {
public:
    FlowerForagerBlob();
    FlowerForagerBlob(float xVal, float yVal, float energyVal);
    ~FlowerForagerBlob();

    void harvestFlower();
};

#endif // FLOWERFORAGERBLOB_H
