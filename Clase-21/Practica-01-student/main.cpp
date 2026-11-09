// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 21 - Práctica 1: Secuencia de Destrucción en Jerarquías de Herencia
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"
#include "ForagerBlob.h"
#include "FlowerForagerBlob.h"
#include <iostream>

int main() {
    std::cout << "=== Demostracion en Stack ===\n";
    // TODO: Comprobación de orden LIFO en el Stack con 3 niveles de herencia
    // 1. Abre un bloque con llaves { ... }.
    // 2. Instancia un objeto FlowerForagerBlob flora(100.0f, 150.0f, 90.0f).
    // 3. Invoca flora.harvestFlower().
    // 4. Cierra las llaves y observa la cascada inversa: ~FlowerForagerBlob -> ~ForagerBlob -> ~Blob.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "\n=== Demostracion en Heap ===\n";
    // TODO: Gestión de ciclo de vida en memoria dinámica (Heap)
    // 1. Asigna dinámicamente un objeto FlowerForagerBlob con new.
    // 2. Invoca el método harvestFlower() mediante el operador flecha (->).
    // 3. Libera explícitamente la memoria con delete y observa la cascada de 3 destructores.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    return 0;
}
