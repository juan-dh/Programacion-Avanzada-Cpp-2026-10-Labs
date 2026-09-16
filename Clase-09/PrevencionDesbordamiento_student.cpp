// PrevencionDesbordamiento_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

// TODO 1: Calcula la longitud con aritmética de punteros sin exceder maxLen
int longitudSegura(const char* str, int maxLen) {
    // Implementar aquí
    if (!str) return 0;
    int len = 0;
    while (len < maxLen && *(str + len) != '\0') ++len;
    return len;
}

// TODO 2: Copia acotada garantizando siempre el terminador '\0' en dest[destCap - 1] o antes
void copiarCadenaSegura(char* dest, int destCap, const char* src) {
    int i = 0;
    while (i < destCap - 1 && *(src + i) != '\0' ){
        *(dest + i) = *(src + i);
        ++i;
    }
    *(dest + i) = '\0';
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
