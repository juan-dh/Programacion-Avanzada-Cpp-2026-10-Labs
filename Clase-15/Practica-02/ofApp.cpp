// ofApp.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup()
{
    ofSetWindowTitle("Clase 15 - Práctica 2: Actualización In-Place y Operadores de Asignación");
    ofSetFrameRate(60);

    // Fondo inicial
    ofBackground(18, 22, 28);

    // Verificación en consola de los nuevos operadores y encadenamiento con *this
    std::cout << "=== Operadores de Asignación e Incremento ===\n";
    Vector2D v1(10.0f, 20.0f);
    Vector2D v2(5.0f, 5.0f);

    // 1. Asignación compuesta in-place
    v1 += v2;
    std::cout << "1. v1 tras (+= v2): (" << v1.getX() << ", " << v1.getY() << ")\n";

    // 2. Encadenamiento en cascada retornando *this
    (v1 += v2) += v2;
    std::cout << "2. v1 tras encadenamiento: (" << v1.getX() << ", " << v1.getY() << ")\n";

    // 3. Pre-incremento (++v1)
    ++v1;
    std::cout << "3. v1 tras pre-incremento (++v1): (" << v1.getX() << ", " << v1.getY() << ")\n";
    std::cout << "============================================================\n\n";

    // Inicializamos dos entidades con diferentes posiciones, velocidades, radios y colores
    particle1 = Particle(200.0f, 150.0f, 5.0f, 3.5f, 24.0f, ofColor(6, 182, 212));
    particle2 = Particle(500.0f, 350.0f, -3.0f, 4.5f, 18.0f, ofColor(249, 115, 22));
}

void ofApp::update()
{
    // Actualizamos la cinemática in-place y controlamos rebotes en los bordes
    particle1.update();
    particle1.checkEdges(ofGetWidth(), ofGetHeight());

    particle2.update();
    particle2.checkEdges(ofGetWidth(), ofGetHeight());
}

void ofApp::draw()
{
    // Dibujamos el fondo
    ofBackground(18, 22, 28);

    // Dibujamos en el lienzo las partículas
    particle1.show();
    particle2.show();
}
