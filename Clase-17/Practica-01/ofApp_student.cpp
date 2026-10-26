// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17 - Práctica 1: Miembros Estáticos y Límite de Rapidez Global
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup() {
    ofSetWindowTitle("Clase 17 - Práctica 1: Miembros Estáticos con Dos Partículas");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // TODO: Inicialización de las dos partículas
    // 1. Inicializa particle1 con posición (200, 150), velocidad (6, 4), radio 20, y color cian ofColor(6, 182, 212).
    // 2. Inicializa particle2 con posición (500, 350), velocidad (-5, 5), radio 18, y color naranja ofColor(249, 115, 22).
    // 3. Imprime en consola la velocidad máxima global compartida usando Particle::getMaxSpeed().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::update() {
    // TODO: Actualización y verificación de bordes de las dos partículas
    // 1. Invoca update() y checkEdges(ofGetWidth(), ofGetHeight()) sobre particle1.
    // 2. Invoca update() y checkEdges(ofGetWidth(), ofGetHeight()) sobre particle2.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    ofBackground(18, 22, 28);

    // TODO: Dibujar las partículas
    // Invoca show() sobre particle1 y particle2.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::keyPressed(int key) {
    // TODO: Interacción con el teclado para modificar el miembro estático
    // 1. Si key == OF_KEY_UP: aumenta Particle::setMaxSpeed en 1.0f.
    // 2. Si key == OF_KEY_DOWN: reduce Particle::setMaxSpeed en 1.0f.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
