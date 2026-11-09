// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 2: Clasificación de Derivación
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"
#include "ForagerBlob.h"
#include "StealthBlob.h"
#include <iostream>

int main() {
    std::cout << "=== Escenario 1: Herencia Publica (Upcasting) ===\n";
    // TODO: Comprobación de Upcasting en Herencia Pública
    // 1. Instancia ForagerBlob publicBlob(50.0f, 50.0f, 100.0f).
    // 2. Declara un puntero Blob* basePtr = &publicBlob; (upcasting implícito).
    // 3. Imprime la posición y energía accediendo a través de basePtr.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "\n=== Escenario 2: Herencia Privada (Aislamiento) ===\n";
    // TODO: Comprobación de Herencia Privada
    // 1. Instancia StealthBlob stealthBlob(10.0f, 15.0f, 120.0f).
    // 2. Invoca stealthBlob.stealthMove(5.0f).
    // 3. Imprime stealthBlob.getEnergy().
    // 4. Reflexiona: ¿por qué fallaría la línea 'Blob* invalidPtr = &stealthBlob;'?
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "\n=== Fin del Programa ===\n";
    return 0;
}
