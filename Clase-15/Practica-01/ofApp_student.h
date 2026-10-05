// ofApp_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp {
private:
    Particle particle1; // Primera partícula provista como referencia

    // TODO: Declaración de la segunda entidad
    // Declara la segunda partícula (particle2) como miembro privado.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif // OFAPP_H
