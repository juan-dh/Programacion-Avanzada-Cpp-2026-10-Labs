// ofApp.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 13: Introducción a openFrameworks y Sobrecarga de Operadores
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"

class ofApp : public ofBaseApp
{
private:
    float anguloRotacion{0.0f};
    float posY{0.0f};

public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif // OFAPP_H
