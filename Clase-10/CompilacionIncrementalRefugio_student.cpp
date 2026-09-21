// CompilacionIncrementalRefugio_student.cpp
// USFQ - Programación Avanzada en C++
// Clase 10 - Ejemplo 3: Compilación Separada, Enlazado y Simulación del Refugio
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)
//
// Instrucciones de compilación en terminal:
// g++ -std=c++14 -Wall -Wextra -c Human_student.cpp -o Human_student.o
// g++ -std=c++14 -Wall -Wextra -c CompilacionIncrementalRefugio_student.cpp -o CompilacionIncrementalRefugio_student.o
// g++ Human_student.o CompilacionIncrementalRefugio_student.o -o CompilacionIncrementalRefugio_student
// ./CompilacionIncrementalRefugio_student

#include <iostream>
#include "Human.h"

int main()
{
    std::cout << "--- 1. Preparacion de Entidades en el Refugio ---\n";
    // =========================================================================
    // TODO 1: Instancia a las dos entidades del combate:
    // 1. Un defensor saludable llamado "Tommy Miller" (75 de salud, HealthState::Healthy, 30 de daño).
    // 2. Un atacante hostil llamado "Caminante Infectado" (50 de salud, HealthState::Zombie, 25 de daño).
    // =========================================================================
    /* TODO: Instanciar defensor y zombie */

    std::cout << "\n--- 2. Combate ---\n";
    int ronda = 1;
    while (defensor.getHealth() > 0 && zombie.getHealth() > 0 && ronda <= 3)
    {
        std::cout << "\n[Turno de Combate #" << ronda << "]\n";

        // =====================================================================
        // TODO 2: El zombie ataca al defensor pasando su dirección (&defensor).
        // =====================================================================
        /* TODO: Invocación de attack del zombie hacia &defensor */
        defensor.displayCard();

        // Si Tommy sobrevive al ataque y no fue infectado, contraataca
        if (defensor.getHealth() > 0 && defensor.getState() != HealthState::Zombie)
        {
            std::cout << "⚔️  Tommy contraataca al zombie...\n";
            zombie.applyDamage(defensor.getDamage());
            zombie.displayCard();
        }
        ++ronda;
    }

    std::cout << "\n--- 3. Fin del Combate ---\n";
    std::cout << "Finalizando ejecucion de main(). Liberacion final de memoria:\n";
    return 0;
}
