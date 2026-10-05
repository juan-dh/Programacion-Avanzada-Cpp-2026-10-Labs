// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"

void ofApp::setup() {
    ofSetWindowTitle("Clase 15 - Practica 1: Movimiento Cinemático y Rebote");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // Inicializamos la primera partícula con posición, velocidad, radio y color (Cian)
    particle1 = Particle(200.0f, 150.0f, 5.0f, 3.5f, 24.0f, ofColor(6, 182, 212));

    // TODO: Inicialización de la segunda partícula
    // Inicializa particle2 con otra posición, velocidad, radio y color contrastante (Naranja).
    // Ejemplo: particle2 = Particle(500.0f, 350.0f, -3.0f, 4.5f, 18.0f, ofColor(249, 115, 22));
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::update() {
    // Actualizamos y rebotamos particle1 como referencia
    particle1.update();
    particle1.checkEdges(ofGetWidth(), ofGetHeight());

    // TODO: Actualización y control de bordes de particle2
    // Actualiza la posición y verifica colisiones con los bordes para particle2.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    // Dibujamos el fondo
    ofBackground(18, 22, 28);

    // Renderizamos la primera partícula llamando a su propio método show()
    particle1.show();

    // TODO: Renderizado de la segunda partícula
    // Dibuja particle2 en pantalla invocando su método show().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
