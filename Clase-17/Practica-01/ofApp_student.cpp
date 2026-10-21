// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup() {
    ofSetWindowTitle("Clase 17 - Miembros Estáticos y Sistema de Partículas");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // TODO: Inicialización del sistema de partículas y emisión
    // 1. Instancia 'system' en el centro de la pantalla (ofGetWidth() / 2.0f, ofGetHeight() / 2.0f).
    // 2. Mediante un bucle, añade 35 partículas llamando a system.addParticle().
    // 3. Imprime en consola el origen de 'system' con operator<< y la rapidez con Particle::getMaxSpeed().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::update() {
    // TODO: Actualización de la simulación
    // Invoca system.update(ofGetWidth(), ofGetHeight()); para actualizar la cinemática coordinada.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    ofBackground(18, 22, 28);

    // TODO: Renderizado del sistema
    // Renderiza el emisor llamando a system.draw().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::keyPressed(int key) {
    // TODO: Interacción con el teclado para modificar el miembro estático
    // 1. Si key == '+' o OF_KEY_UP: aumenta Particle::setMaxSpeed en 1.0f.
    // 2. Si key == '-' o OF_KEY_DOWN: reduce Particle::setMaxSpeed en 1.0f.
    // 3. Si key == 'r' o 'R': restablece Particle::setMaxSpeed a 8.0f.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
