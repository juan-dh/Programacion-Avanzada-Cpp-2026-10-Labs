// CStyleStrings_student.cpp
// Clase 09: C-Style Strings, Stack vs .rodata y Mutabilidad
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

// 1. Calcula la longitud hasta '\0' o maxLen con punteros
int longitudSegura(const char* str, int maxLen) {
    if (!str) return 0;
    int len = 0;
    while (len < maxLen && *(str + len) != '\0') ++len;
    return len;
}

// 2. Copia acotada garantizando siempre el terminador '\0'
void copiarCadenaSegura(char* dest, int destCap, const char* src) {
    if (!dest || destCap <= 0) return;
    if (!src) { *dest = '\0'; return; }
    int i = 0;
    while (i < destCap - 1 && *(src + i) != '\0') {
        *(dest + i) = *(src + i);
        ++i;
    }
    *(dest + i) = '\0';
}

int main() {
    char destino[12];

    // Copia dentro de los límites
    copiarCadenaSegura(destino, 12, "Sector 8");
    std::cout << "Copia normal:   \"" << destino << "\" (len: " << longitudSegura(destino, 12) << ")\n";

    // Prevención de desbordamiento ante entrada excesiva
    copiarCadenaSegura(destino, 12, "HordaZombieInminente"); // 20 chars en buffer de 12
    std::cout << "Copia truncada: \"" << destino << "\" (len: " << longitudSegura(destino, 12) << ")\n";

    return 0;
}
