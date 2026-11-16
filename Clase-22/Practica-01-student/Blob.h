// Blob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef BLOB_H
#define BLOB_H

#include <iostream>

class Blob {
protected:
    float x{0.0f};
    float y{0.0f};
    float energy{100.0f};
    bool alive{true};

public:
    Blob();
    Blob(float xVal, float yVal, float energyVal);
    ~Blob();

    float getX() const;
    float getY() const;
    float getEnergy() const;
    bool isAlive() const;

    void consumeEnergy(float amount);

    // TODO: Declaración de función virtual en la clase base
    // Declara el método void update() anteponiendo la palabra clave virtual
    // para activar el enlace dinámico en toda la jerarquía.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // BLOB_H
