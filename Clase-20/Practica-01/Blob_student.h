// Blob_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef BLOB_STUDENT_H
#define BLOB_STUDENT_H

#include "ofMain.h"
#include "ofxSvg.h"

class Blob {
protected:
    mutable ofxSvg svg{};      // Recurso vectorial provisto para el renderizado
    float noiseOffset{0.0f};   // Coordenada temporal para Perlin Noise provista

    // TODO: Declaracion de atributos protegidos de la clase base
    // Declara los atributos comunes bajo el especificador de acceso protegido (protected).
    // Recuerda que las clases derivadas (ForagerBlob, PredatorBlob) requeriran acceso directo a ellos,
    // pero el codigo cliente externo NO debe poder modificarlos directamente.
    // Atributos necesarios:
    // - glm::vec2 position{0.0f, 0.0f};
    // - glm::vec2 velocity{0.0f, 0.0f};
    // - float energy{100.0f};
    // - float radius{28.0f};
    // - ofColor color{200, 200, 200};
    // - bool alive{true};
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

public:
    Blob() = default;
    Blob(const glm::vec2& pos, const glm::vec2& vel, float energy, float radius, const ofColor& col);

    glm::vec2 getPosition() const;
    glm::vec2 getVelocity() const;
    float getEnergy() const;
    float getRadius() const;
    ofColor getColor() const;
    bool isAlive() const;

    void setPosition(const glm::vec2& pos);
    void setVelocity(const glm::vec2& vel);
    void setColor(const ofColor& col);

    // TODO: Declaracion de metodos miembro de Blob
    // Declara los metodos para el ciclo de vida y cinematica del Blob:
    // - void update();
    // - void draw() const;
    // - void consumeEnergy(float amount);
    // - void checkEdges();
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // BLOB_STUDENT_H
