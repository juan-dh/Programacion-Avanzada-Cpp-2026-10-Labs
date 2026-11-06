// ofApp.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"
#include "ofxSvg.h"
#include "ForagerBlob.h"
#include "PredatorBlob.h"
#include <vector>

class ofApp : public ofBaseApp {
private:
    ForagerBlob forager;
    PredatorBlob predator;
    ofxSvg foodSvg;
    std::vector<glm::vec2> foodPellets;

public:
    void setup() override;
    void update() override;
    void draw() override;
    void mousePressed(int x, int y, int button) override;
    void keyPressed(int key) override;
};

#endif // OFAPP_H
