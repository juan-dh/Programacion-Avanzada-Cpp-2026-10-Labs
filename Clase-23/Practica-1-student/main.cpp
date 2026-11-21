// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 1: Destructores Virtuales en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"
#include "PredatorBlob.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Blob*> population;
    population.push_back(new PredatorBlob(80.0f, 40.0f, 110.0f, 35.0f, 16));
    population.push_back(new PredatorBlob(15.0f, 95.0f, 100.0f, 40.0f, 16));

    std::cout << "=== Simulacion en el Heap ===\n";
    for (Blob* creature : population) {
        creature->update();
    }

    std::cout << "\nBuffers dinamicos activos antes de limpiar: "
              << PredatorBlob::getActiveTrailBuffers() << "\n";

    std::cout << "\n=== Limpieza Polimorfica del Ecosistema ===\n";
    // TODO: Liberación polimórfica de cada criatura alojada en el Heap
    // 1. Recorre cada puntero Blob* creature dentro de population y aplica delete creature.
    // 2. Vacía el vector llamando a population.clear().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "\nBuffers dinamicos activos tras delete: "
              << PredatorBlob::getActiveTrailBuffers() << "\n";

    return 0;
}
