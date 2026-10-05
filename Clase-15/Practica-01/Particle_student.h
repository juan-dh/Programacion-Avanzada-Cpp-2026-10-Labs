// Particle_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "Vector2D.h"

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{20.0f};
    ofColor color{255, 255, 255};

public:
    Particle() = default;
    Particle(float startX, float startY, float vx, float vy, float r = 20.0f, ofColor c = ofColor(255, 255, 255));

    void update();
    void checkEdges(float width, float height);

    // TODO: Declaración del método show
    // Declara el método show() calificado como const para renderizar la partícula en pantalla.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    const Vector2D& getPosition() const { return position; }
    float getRadius() const { return radius; }
};

#endif // PARTICLE_H
