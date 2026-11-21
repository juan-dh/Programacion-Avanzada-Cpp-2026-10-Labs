// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "IBeing.h"
#include "Blob.h"
#include "ForagerBlob.h"
#include "PredatorBlob.h"
#include "Plant.h"
#include <iostream>
#include <vector>

// TODO: Función general runEcosystemCycle sobre la interfaz pura
// 1. Recibe const std::vector<IBeing*>& beings.
// 2. Recorre cada being; si being->isActive() es verdadero, invoca being->update().
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

int main() {
    std::vector<IBeing*> world;
    world.push_back(new ForagerBlob(10.0f, 20.0f, 90.0f));
    world.push_back(new PredatorBlob(75.0f, 50.0f, 110.0f, 35.0f));
    world.push_back(new Plant(40.0f, 40.0f, 20.0f));

    std::cout << "=== Ciclo 1 del Ecosistema ===\n";
    runEcosystemCycle(world);

    std::cout << "\n=== Ciclo 2 del Ecosistema ===\n";
    runEcosystemCycle(world);

    std::cout << "\n=== Liberacion mediante Interfaz Pura ===\n";
    // TODO: Limpieza segura de todos los seres vivos a través de IBeing*
    // Recorre world, aplica delete being a cada elemento y limpia el vector con world.clear().
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    return 0;
}
