// Particle_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17 - Práctica 1: Miembros Estáticos y Límite de Rapidez Global
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PARTICLE_STUDENT_H
#define PARTICLE_STUDENT_H

#include "ofMain.h"
#include "Vector2D.h"
#include <iostream>

class Particle {
private:
    Vector2D position;
    Vector2D velocity;
    float radius{14.0f};
    ofColor color{255, 255, 255};

    // TODO: Declaración del miembro estático de rapidez máxima
    // Declara una variable estática privada 'maxSpeed' de tipo float común a todas las partículas.
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

    // TODO: Declaración de métodos estáticos para consultar y modificar maxSpeed
    // 1. static float getMaxSpeed(): retorna 'maxSpeed'.
    // 2. static void setMaxSpeed(float s): declara el setter estático para alterar el límite global.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // PARTICLE_STUDENT_H
