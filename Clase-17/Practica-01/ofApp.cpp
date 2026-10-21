// ofApp.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 17: Miembros Estáticos, Composición y Gestión Dinámica de Memoria
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"
#include <iostream>

void ofApp::setup() {
    ofSetWindowTitle("Clase 17 - Miembros Estáticos y Sistema de Partículas");
    ofSetFrameRate(60);
    ofBackground(18, 22, 28);

    // Instanciamos el emisor en el centro geométrico de la pantalla
    system = ParticleSystem(Vector2D(ofGetWidth() / 2.0f, ofGetHeight() / 2.0f));

    // Generamos 35 partículas coordinadas desde el emisor
    for (int i = 0; i < 35; ++i) {
        system.addParticle();
    }

    // Telemetría en consola mediante operator<< y miembro estático getMaxSpeed()
    std::cout << "=== Telemetría del Sistema de Partículas ===\n";
    std::cout << "Origen del emisor: " << system.getOrigin() << "\n";
    std::cout << "Velocidad máxima global (static): " << Particle::getMaxSpeed() << " px/frame\n";
    std::cout << "Controles de teclado:\n";
    std::cout << "  [+] o [UP]: Incrementar velocidad máxima global\n";
    std::cout << "  [-] o [DOWN]: Reducir velocidad máxima global\n";
    std::cout << "  [R]: Restablecer velocidad por defecto (8.0 px/frame)\n";
    std::cout << "============================================\n\n";
}

void ofApp::update() {
    system.update(ofGetWidth(), ofGetHeight());
}

void ofApp::draw() {
    ofBackground(18, 22, 28);
    system.draw();
}

void ofApp::keyPressed(int key) {
    // Delegación directa a métodos estáticos de la clase Particle
    if (key == '+' || key == '=' || key == OF_KEY_UP) {
        Particle::setMaxSpeed(Particle::getMaxSpeed() + 1.0f);
        std::cout << ">> Velocidad maxima aumentada: " << Particle::getMaxSpeed() << " px/frame\n";
    } else if (key == '-' || key == '_' || key == OF_KEY_DOWN) {
        Particle::setMaxSpeed(Particle::getMaxSpeed() - 1.0f);
        std::cout << ">> Velocidad maxima reducida: " << Particle::getMaxSpeed() << " px/frame\n";
    } else if (key == 'r' || key == 'R') {
        Particle::setMaxSpeed(8.0f);
        std::cout << ">> Velocidad maxima restablecida a 8.0 px/frame\n";
    }
}
