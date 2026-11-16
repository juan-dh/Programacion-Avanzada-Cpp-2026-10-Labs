// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 2: Pérdida de Tipo (Object Slicing) vs. Referencias
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"
#include "PredatorBlob.h"
#include <iostream>

// TODO: Función executeByValue (Paso por Valor - Object Slicing)
// 1. Declara void executeByValue(Blob creature) recibiendo a la criatura POR VALOR.
// 2. Invoca creature.update() en su interior.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

// TODO: Función executeByReference (Paso por Referencia - Polimorfismo Intacto)
// 1. Declara void executeByReference(Blob& creature) recibiendo a la criatura POR REFERENCIA.
// 2. Invoca creature.update() en su interior.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

int main() {
    PredatorBlob predator(100.0f, 50.0f, 120.0f, 35.0f);

    std::cout << "=== Tamano Fisico en Memoria ===\n";
    std::cout << "Tamano de Blob:         " << sizeof(Blob) << " bytes\n";
    std::cout << "Tamano de PredatorBlob: " << sizeof(PredatorBlob) << " bytes\n";

    std::cout << "\n=== Escenario 1: Paso por Valor (Object Slicing) ===\n";
    // TODO: Invocación por valor y verificación del estado original
    // 1. Llama a executeByValue(predator).
    // 2. Imprime "Energia original tras paso por valor: " << predator.getEnergy() << "\n".
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "\n=== Escenario 2: Paso por Referencia (Polimorfismo Intacto) ===\n";
    // TODO: Invocación por referencia y verificación del estado original
    // 1. Llama a executeByReference(predator).
    // 2. Imprime "Energia original tras paso por referencia: " << predator.getEnergy() << "\n".
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    return 0;
}
