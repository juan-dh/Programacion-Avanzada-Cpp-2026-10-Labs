// DemoModular_student.cpp
// USFQ - Programación Avanzada en C++
// Clase 10 - Ejemplo 2: Separación en Tres Archivos y Compilación Multi-archivo
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

// TODO 1: Incluye la interfaz de la clase Human.
// Pregunta pedagógica: ¿Por qué usamos comillas dobles "" en vez de <>?
#include /* TODO: "Human.h" */

int main() {
    // TODO 2: Instancia dos objetos Human:
    // 1. joel ("Joel Miller", 100 de salud, HealthState::Healthy, 35 de daño)
    // 2. ellie ("Ellie Williams", 80 de salud, HealthState::Healthy, 20 de daño)
    /* TODO: Instanciar joel y ellie */

    std::cout << "\nEstado inicial del equipo de exploracion:\n";
    // TODO: Mostrar las tarjetas de joel y ellie
    /* TODO: displayCard() */

    std::cout << "\nSimulando emboscada zombie en la patrulla:\n";
    // TODO 3: Aplica 25 puntos de daño a joel y muestra su tarjeta actualizada.
    /* TODO: applyDamage y displayCard */

    std::cout << "\nCompilacion multi-archivo completada con exito.\n";
    return 0;
}
