// ForagerBlob.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef FORAGERBLOB_H
#define FORAGERBLOB_H

#include "Blob.h"

class ForagerBlob : public Blob {
public:
    ForagerBlob();
    ForagerBlob(float xVal, float yVal, float energyVal);
    ~ForagerBlob();

    void eatFood(float amount);

    // TODO: Redefinición explícita con override en ForagerBlob
    // Declara void update() añadiendo el especificador override de C++11.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // FORAGERBLOB_H
