// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 1: Operadores new y delete
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"

void ofApp::setup() {
    ofSetWindowTitle("Práctica 1: Demostración de new y delete");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // TODO: Inicializar el sistema en el centro-superior de la pantalla
    // system = ParticleSystem(Vector2D(ofGetWidth() / 2.0f, ofGetHeight() / 3.0f));
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::update() {
    // TODO: Actualizar el sistema de partículas pasando ofGetWidth() y ofGetHeight()
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    ofBackground(18, 22, 28);

    // Dibujamos el recinto (3 paredes cerradas, suelo abierto)
    ofNoFill();
    ofSetColor(51, 65, 85, 200);
    ofSetLineWidth(3.0f);
    ofDrawLine(2, ofGetHeight(), 2, 2);
    ofDrawLine(2, 2, ofGetWidth() - 2, 2);
    ofDrawLine(ofGetWidth() - 2, 2, ofGetWidth() - 2, ofGetHeight());
    ofSetLineWidth(1.0f);

    // TODO: Renderizar el sistema llamando a system.draw() y dibujar el contador de partículas en el Heap
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    ofSetColor(148, 163, 184);
    ofDrawBitmapString("Mouse: Clic o arrastre para reservar memoria (new)", 25, 55);
    ofDrawBitmapString("Escape: Al salir por el fondo se liberan (delete)", 25, 75);
    ofDrawBitmapString("Teclado [C]: Limpieza masiva de memoria (clear / delete)", 25, 95);
}

void ofApp::mousePressed(int x, int y, int button) {
    // TODO: Añadir partículas en la posición del clic mediante system.addParticle(x, y)
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::mouseDragged(int x, int y, int button) {
    // TODO: Añadir partículas durante el arrastre del ratón
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::keyPressed(int key) {
    // TODO: Limpiar memoria con la tecla [C] llamando a system.clear()
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
