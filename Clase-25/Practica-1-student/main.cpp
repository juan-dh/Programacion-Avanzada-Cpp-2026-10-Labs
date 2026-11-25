// main.cpp
// Práctica 1: Iteradores y Eliminación Segura en Contenedores Secuenciales
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"
#include <iostream>
#include <list>

// TODO: Recorrido de solo lectura con const_iterator
// 1. Imprime "Colonia (" << colony.size() << " individuos):\n".
// 2. Recorre colony desde cbegin() hasta cend() con std::list<ForagerBlob>::const_iterator.
// 3. Imprime posición, energía y estado activo de cada individuo usando el operador flecha (it->).
void printColony(const std::list<ForagerBlob>& colony) {
    // === TU CODIGO EMPIEZA AQUI ===
    (void)colony;
    // === TU CODIGO TERMINA AQUI ===
}

// TODO: Eliminación segura durante el recorrido sin invalidar el iterador
// 1. Recorre colony con std::list<ForagerBlob>::iterator desde begin() hasta end().
// 2. Si !it->isActive(), elimina el nodo actualizando it = colony.erase(it) e incrementa removed.
// 3. Si está activo, avanza manualmente con ++it. Retorna removed.
int purgeInactive(std::list<ForagerBlob>& colony) {
    int removed = 0;
    // === TU CODIGO EMPIEZA AQUI ===
    (void)colony;
    // === TU CODIGO TERMINA AQUI ===
    return removed;
}

int main() {
    std::list<ForagerBlob> colony;
    colony.push_back(ForagerBlob(10.0f, 15.0f, 80.0f));
    colony.push_back(ForagerBlob(25.0f, 30.0f, 0.0f));
    colony.push_front(ForagerBlob(5.0f, 8.0f, 95.0f));

    std::cout << "=== 1. Recorrido con const_iterator ===\n";
    printColony(colony);

    std::cout << "\n=== 2. Eliminacion segura con erase(it) ===\n";
    int purged = purgeInactive(colony);
    std::cout << "Individuos inactivos eliminados: " << purged << "\n";
    printColony(colony);

    return 0;
}
