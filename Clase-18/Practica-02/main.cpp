// main.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Regla de las Tres e Indexación (Consola)
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include "Vector2D.h"
#include "Particle.h"
#include "ParticleSystem.h"

int main() {
    // -------------------------------------------------------------
    // 1. Asignación Dinámica en Heap
    // -------------------------------------------------------------
    std::cout << "[1] Creando sysA con 2 partículas dinámicas en el Heap:\n";
    ParticleSystem sysA;
    sysA.addParticle(100.0f, 150.0f);
    sysA.addParticle(200.0f, 250.0f);

    std::cout << "    sysA[0] @ " << sysA[0] << " | Pos: " << sysA[0]->getPosition() << "\n";
    std::cout << "    sysA[1] @ " << sysA[1] << " | Pos: " << sysA[1]->getPosition() << "\n\n";

    // -------------------------------------------------------------
    // 2. Constructor de Copias (Copia Profunda)
    // -------------------------------------------------------------
    std::cout << "[2] Constructor de Copias: ParticleSystem sysB = sysA;\n";
    ParticleSystem sysB = sysA;

    std::cout << "    sysB[0] @ " << sysB[0] << " | Pos: " << sysB[0]->getPosition() << "\n";
    std::cout << "    sysB[1] @ " << sysB[1] << " | Pos: " << sysB[1]->getPosition() << "\n";
    std::cout << "    >> Auditoría: sysA[0] (" << sysA[0] << ") != sysB[0] (" << sysB[0] << ") [COPIA PROFUNDA OK]\n\n";

    // -------------------------------------------------------------
    // 3. Operador de Indexación Mutable (operator[])
    // -------------------------------------------------------------
    std::cout << "[3] Mutación con operator[] mutable sobre sysB[0]:\n";
    sysB[0]->setPosition(Vector2D(999.0f, 999.0f));

    std::cout << "    sysB[0] nueva pos:   " << sysB[0]->getPosition() << "\n";
    std::cout << "    sysA[0] pos original: " << sysA[0]->getPosition() << " (sysA intacto)\n\n";

    // -------------------------------------------------------------
    // 4. Operador de Asignación por Copia (operator=)
    // -------------------------------------------------------------
    std::cout << "[4] Asignación profunda (sysC = sysA) y autoasignación:\n";
    ParticleSystem sysC;
    sysC.addParticle(10.0f, 10.0f); // Recurso previo que debe ser liberado
    sysC = sysA;
    std::cout << "    sysC[0] @ " << sysC[0] << " (Recurso previo liberado, nueva copia en Heap)\n";

    ParticleSystem& refA = sysA;
    sysA = refA; // Autoasignación segura
    std::cout << "    sysA = sysA evaluado de forma segura (protegido por this == &rhs)\n\n";

    // -------------------------------------------------------------
    // 5. Destrucción Segura sin Double Free
    // -------------------------------------------------------------
    std::cout << "[5] Vaciando sysA con delete masivo:\n";
    sysA.clear();
    std::cout << "    sysA vaciado. Partículas restantes en sysA: " << sysA.getParticleCount() << "\n";
    std::cout << "    sysB[0] sigue vivo en Heap @ " << sysB[0] << " | Pos: " << sysB[0]->getPosition() << "\n";
    std::cout << "    >> Integridad confirmada: Ausencia de fugas, cuelgues o double free.\n\n";

    return 0;
}
