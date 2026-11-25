// PredatorBlob.h
// Práctica 1: Funciones Genéricas y Aserciones Estáticas en el Ecosistema
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
    ~PredatorBlob() override = default;

    float getHuntPower() const;
    void update() override;
    std::string getLabel() const override;
};

#endif // PREDATORBLOB_H
