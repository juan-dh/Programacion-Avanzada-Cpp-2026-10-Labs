// PrevencionDesbordamiento_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

// TODO 1: Calcula la longitud con aritmética de punteros sin exceder maxLen
int longitudSegura(const char* str, int maxLen) {
    // Implementar aquí
    return 0;
}

// TODO 2: Copia acotada garantizando siempre el terminador '\0' en dest[destCap - 1] o antes
void copiarCadenaSegura(char* dest, int destCap, const char* src) {
    // Implementar aquí
}

int main() {
    char destino[12];

    // Copia normal
    copiarCadenaSegura(destino, 12, "Sector 8");
    std::cout << "Copia normal:   \"" << destino << "\" (len: " << longitudSegura(destino, 12) << ")\n";

    // Copia con prevención de desbordamiento
    copiarCadenaSegura(destino, 12, "HordaZombieInminente");
    std::cout << "Copia truncada: \"" << destino << "\" (len: " << longitudSegura(destino, 12) << ")\n";

    return 0;
}
