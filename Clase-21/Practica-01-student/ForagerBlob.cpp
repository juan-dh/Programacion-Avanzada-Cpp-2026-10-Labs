// ForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

// TODO: Constructores de ForagerBlob con delegación obligatoria a la clase base Blob
// 1. En el constructor por defecto, delega a Blob() y emite: "Constructor ForagerBlob\n".
// 2. En el constructor parametrizado, delega a Blob(xVal, yVal, energyVal) y emite: "Constructor ForagerBlob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: Destructor de ForagerBlob
// Emite por consola: "Destructor ForagerBlob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

void ForagerBlob::eatFood(float amount) {
    energy += amount;
}
