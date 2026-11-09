// ForagerBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef FORAGERBLOB_H
#define FORAGERBLOB_H

#include "Blob.h"

// Derivación pública: relación formal "es-un" (is-a)
class ForagerBlob : public Blob {
public:
    ForagerBlob();
    ForagerBlob(float xVal, float yVal, float energyVal);
    ~ForagerBlob();

    void eatFood(float amount);
};

#endif // FORAGERBLOB_H
