// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup() {
    ofSetWindowTitle("Clase 15 - Práctica 2: Actualización In-Place y Operadores de Asignación");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    std::cout << "=== Operadores de Asignación e Incremento ===\n";
    Vector2D v1(10.0f, 20.0f);
    Vector2D v2(5.0f, 5.0f);

    // 1. Asignación compuesta in-place
    v1 += v2;
    std::cout << "1. v1 tras (+= v2): (" << v1.getX() << ", " << v1.getY() << ")\n";

    // TODO: Encadenamiento en cascada retornando *this
    // Suma v2 a v1 dos veces consecutivas en una sola instrucción fluida: (v1 += v2) += v2;
    // Imprime el vector resultante en consola.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Pre-incremento de magnitudes vectoriales
    // Aplica el operador prefijo ++ sobre v1 (++v1) para avanzar sus componentes en una unidad.
    // Imprime el vector resultante en consola.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "============================================================\n\n";

    // Inicializamos dos entidades con diferentes posiciones, velocidades, radios y colores
    particle1 = Particle(200.0f, 150.0f, 5.0f, 3.5f, 24.0f, ofColor(6, 182, 212));
    particle2 = Particle(500.0f, 350.0f, -3.0f, 4.5f, 18.0f, ofColor(249, 115, 22));
}

void ofApp::update() {
    // TODO: Actualización cinemática y control de bordes
    // Actualiza la cinemática in-place y comprueba rebotes con checkEdges para particle1 y particle2.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    ofBackground(18, 22, 28);

    // TODO: Renderizado en el lienzo gráfico
    // Dibuja ambas partículas en pantalla invocando sus respectivos métodos show().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
