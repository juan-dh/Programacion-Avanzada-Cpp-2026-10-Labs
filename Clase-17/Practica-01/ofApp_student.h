// ofApp_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17 - Práctica 1: Miembros Estáticos y Límite de Rapidez Global
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_STUDENT_H
#define OFAPP_STUDENT_H

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp {
private:
    // TODO: Declaración de dos instancias de Particle
    // Declara 'particle1' y 'particle2' como atributos privados.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

public:
    void setup() override;
    void update() override;
    void draw() override;
    void keyPressed(int key) override;
};

#endif // OFAPP_STUDENT_H
