// ofApp.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 13: Introducción a openFrameworks y Sobrecarga de Operadores
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ofApp.h"

void ofApp::setup()
{
    ofSetWindowTitle("Practica 1: Formas Basicas en openFrameworks");
    ofSetFrameRate(60);
    ofBackground(30, 30, 30);
}

void ofApp::update()
{
    // Incrementamos el angulo para que el cuadrado rote
    anguloRotacion += 1.5f;

    // Incrementamos la coordenada vertical para que el circulo descienda continuamente
    posY += 2.0f;
}

void ofApp::draw()
{
    // 1. Cuadrado rotando sobre su propio centro en el lado derecho
    ofPushMatrix();
    ofTranslate(500, 300);
    ofRotateDeg(anguloRotacion);
    ofSetColor(239, 68, 68); // Rojo
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(0, 0, 100, 100);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofPopMatrix();

    // 2. Circulo moviendose continuamente de arriba hacia abajo
    ofSetColor(59, 130, 246); // Azul
    ofDrawCircle(200, posY, 30);
}
