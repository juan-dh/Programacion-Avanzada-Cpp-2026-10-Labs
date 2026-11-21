// PredatorBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 1: Destructores Virtuales en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PREDATORBLOB_H
#define PREDATORBLOB_H

#include "Blob.h"

class PredatorBlob : public Blob {
private:
    float huntPower{25.0f};
    int trailCapacity{0};
    int trailCount{0};
    float* trailHistory{nullptr};

    static int activeTrailBuffers;

public:
    PredatorBlob();
    PredatorBlob(float xVal, float yVal, float energyVal, float powerVal, int capacityVal);

    // TODO: Destructor sobrescrito con override
    // Declara ~PredatorBlob() con el especificador override.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    float getHuntPower() const;
    static int getActiveTrailBuffers();

    void update() override;
};

#endif // PREDATORBLOB_H
