// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 22 - Práctica 1: Polimorfismo Dinámico y Funciones Virtuales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"
#include "ForagerBlob.h"
#include "PredatorBlob.h"
#include <iostream>
#include <vector>

// TODO: Función general polimórfica simulateEcosystemStep
// 1. Recibe const std::vector<Blob*>& population.
// 2. Recorre cada puntero Blob* creature e invoca creature->update().
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

int main() {
    Blob basal(10.0f, 10.0f, 100.0f);
    ForagerBlob forager(50.0f, 60.0f, 90.0f);
    PredatorBlob predator(120.0f, 80.0f, 110.0f, 30.0f);

    // TODO: Almacenamiento uniforme en std::vector<Blob*> e invocación en dos ciclos
    // 1. Crea std::vector<Blob*> population = {&basal, &forager, &predator};
    // 2. Imprime "=== Ciclo 1 del Ecosistema Polimorfico ===\n" y llama a simulateEcosystemStep(population).
    // 3. Imprime "\n=== Ciclo 2 del Ecosistema Polimorfico ===\n" y llama a simulateEcosystemStep(population).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    return 0;
}
