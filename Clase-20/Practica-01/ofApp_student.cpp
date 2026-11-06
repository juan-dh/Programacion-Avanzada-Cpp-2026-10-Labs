// ofApp_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"

void ofApp::setup() {
    ofSetWindowTitle("Clase 20: Ecosistema de Blobs SVG");
    ofSetFrameRate(60);

    // Carga de la plantilla grafica provista
    foodSvg.load("food.svg");

    // TODO: Instanciacion de criaturas especializadas
    // 1. Instancia forager (ForagerBlob) en (250.0f, 320.0f) con velocidad (2.4f, 1.8f), energia 90.0f y radio 28.0f.
    // 2. Instancia predator (PredatorBlob) en (750.0f, 450.0f) con velocidad (-3.0f, -2.0f), energia 100.0f, radio 34.0f y huntPower 28.0f.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Poblacion inicial de alimento
    // Limpia foodPellets y genera 12 bolitas en posiciones aleatorias dentro de la ventana:
    // glm::vec2(ofRandom(80, ofGetWidth() - 80), ofRandom(100, ofGetHeight() - 80)).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::update() {
    // TODO: Actualizacion cinematica de criaturas
    // Invoca update() en forager y predator.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Deteccion de colisiones de forrajeo
    // Si forager esta vivo (forager.isAlive()):
    // Recorre foodPellets con un iterador. Si glm::distance(forager.getPosition(), *it) < forager.getRadius() + 12.0f:
    // 1. Alimenta al recolector con forager.eatFood(22.0f).
    // 2. Regenera el pellet en una nueva posicion aleatoria: glm::vec2(ofRandom(80, ofGetWidth() - 80), ofRandom(100, ofGetHeight() - 80)).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Interaccion de depredacion
    // Si predator y forager estan ambos vivos, ejecuta predator.hunt(forager).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::draw() {
    // Fondo crema suave estilo Primer
    ofBackground(246, 244, 238);

    // Renderizado de pellets de alimento provisto
    for (const auto& pellet : foodPellets) {
        ofPushMatrix();
        ofTranslate(pellet.x, pellet.y);
        ofScale(0.24f, 0.24f);
        ofTranslate(-50.0f, -50.0f);
        foodSvg.draw();
        ofPopMatrix();
    }

    // TODO: Renderizado de criaturas del ecosistema
    // Dibuja forager y predator llamando a sus respectivos metodos draw().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::mousePressed(int x, int y, int button) {
    // TODO: Siembra manual de alimento con clic del mouse
    // Agrega una nueva coordenada glm::vec2(static_cast<float>(x), static_cast<float>(y)) al vector foodPellets.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ofApp::keyPressed(int key) {
    if (key == 'r' || key == 'R') {
        setup();
    }
}
