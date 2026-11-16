// PredatorBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
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

    // TODO: Redefinición explícita con override en PredatorBlob
    // Declara void update() añadiendo el especificador override de C++11.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // PREDATORBLOB_H
