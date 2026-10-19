// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup() {
    ofSetWindowTitle("Clase 16 - Práctica 2: Sistema de Partículas y Censo Global");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // TODO: Inicialización del sistema de partículas y emisión
    // 1. Instancia 'system' en el centro de la pantalla (ofGetWidth() / 2.0f, ofGetHeight() / 2.0f).
    // 2. Mediante un bucle, añade 25 partículas llamando a system.addParticle().
    // 3. Imprime en consola el origen de 'system' usando operator<< y el censo con Particle::getCount().
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

    // TODO: Renderizado del sistema y HUD de telemetría
    // 1. Renderiza el emisor llamando a system.draw().
    // 2. Establece color blanco con ofSetColor(240, 240, 240).
    // 3. Proyecta texto con ofDrawBitmapString mostrando el censo global con Particle::getCount().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
