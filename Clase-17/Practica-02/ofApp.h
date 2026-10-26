// ofApp.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17 - Práctica 2: Sistema de Partículas
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"
#include "ParticleSystem.h"

class ofApp : public ofBaseApp {
private:
    ParticleSystem system;

public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif // OFAPP_H
