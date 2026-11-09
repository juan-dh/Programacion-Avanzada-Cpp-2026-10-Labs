// FlowerForagerBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "FlowerForagerBlob.h"

// TODO: Constructores de FlowerForagerBlob con delegación a ForagerBlob
// 1. En el constructor por defecto, delega a ForagerBlob() y emite: "Constructor FlowerForagerBlob\n".
// 2. En el constructor parametrizado, delega a ForagerBlob(xVal, yVal, energyVal) y emite: "Constructor FlowerForagerBlob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: Destructor de FlowerForagerBlob
// Emite por consola: "Destructor FlowerForagerBlob\n".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

void FlowerForagerBlob::harvestFlower() {
    eatFood(15.0f);
}
