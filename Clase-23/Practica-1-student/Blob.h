// Blob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 1: Destructores Virtuales en el Ecosistema
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

    // TODO: Destructor virtual en la clase base polimórfica
    // Declara el destructor ~Blob() usando la palabra clave virtual para garantizar
    // que delete sobre un puntero Blob* invoque primero al destructor derivado.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    float getX() const;
    float getY() const;
    float getEnergy() const;
    bool isAlive() const;

    void consumeEnergy(float amount);
    virtual void update();
};

#endif // BLOB_H
