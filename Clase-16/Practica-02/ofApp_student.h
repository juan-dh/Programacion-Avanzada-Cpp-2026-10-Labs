// ofApp_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef OFAPP_H
#define OFAPP_H

#include "ofMain.h"
#include "ParticleSystem.h"

class ofApp : public ofBaseApp {
private:
    // TODO: Declaración del emisor coordinado
    // Declara el atributo privado 'system' de tipo ParticleSystem.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif // OFAPP_H
