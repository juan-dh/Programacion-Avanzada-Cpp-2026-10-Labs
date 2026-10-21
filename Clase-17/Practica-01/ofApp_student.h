// ofApp_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_STUDENT_H
#define OFAPP_STUDENT_H

#include "ofMain.h"
#include "ParticleSystem.h"

class ofApp : public ofBaseApp {
private:
    ParticleSystem system;

public:
    void setup() override;
    void update() override;
    void draw() override;
    void keyPressed(int key) override; // Gestión interactiva de teclado
};

#endif // OFAPP_STUDENT_H
