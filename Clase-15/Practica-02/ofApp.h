// ofApp.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp
{
private:
    Particle particle1;
    Particle particle2;

public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif // OFAPP_H
