// Particle_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "Vector2D.h"
#include <iostream>

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{14.0f};
    ofColor color{255, 255, 255};

    // TODO: Declaración del censo estático
    // Declara la variable miembro estática 'count' de tipo entero para llevar el censo global.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

public:
    Particle() = default;
    Particle(float startX, float startY, float vx, float vy, float r = 14.0f, ofColor c = ofColor(255, 255, 255));

    void update();
    void checkEdges(float width, float height);
    void show() const;

    const Vector2D& getPosition() const { return position; }
    const Vector2D& getVelocity() const { return velocity; }
    float getRadius() const { return radius; }

    // TODO: Declaración de método estático para consultar el censo
    // Declara 'static int getCount()' que retorna el valor de la variable estática 'count'.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // PARTICLE_H
