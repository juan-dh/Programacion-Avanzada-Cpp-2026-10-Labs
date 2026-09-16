// DemoModular_student.cpp
// USFQ - Programación Avanzada en C++
// Clase 10 - Ejemplo 2: Separación en Tres Archivos y Compilación Multi-archivo
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)
//
// Instrucciones de compilación en terminal:
// g++ -std=c++14 -Wall -Wextra Human_student.cpp DemoModular_student.cpp -o demo_modular
// ./demo_modular

#include <iostream>

// TODO 1: Incluye la interfaz de la clase Human.
// Pregunta pedagógica: ¿Por qué usamos comillas dobles "" en vez de <>?
#include "Human.h"

int main() {
    // TODO 2: Instancia dos objetos Human:
    // 1. joel ("Joel Miller", 100 de salud, HealthState::Healthy, 35 de daño)
    // 2. ellie ("Ellie Williams", 80 de salud, HealthState::Healthy, 20 de daño)
    Human joel("Joel Miller", 100, HealthState::Healthy, 35);
    Human ellie("Ellie Williams", 80, HealthState::Healthy, 20);

    std::cout << "\nEstado inicial del equipo de exploracion:\n";
    joel.displayCard();
    ellie.displayCard();

    // TODO 3: Aplica 25 puntos de daño a joel y muestra su tarjeta de estado actualizada.
    std::cout << "\nSimulando emboscada zombie en la patrulla:\n";
    joel.applyDamage(25);
    joel.displayCard();

    std::cout << "\nCompilacion multi-archivo completada con exito.\n";
    return 0;
}
