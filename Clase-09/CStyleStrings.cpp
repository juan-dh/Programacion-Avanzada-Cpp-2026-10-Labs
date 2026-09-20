// CStyleStrings.cpp
// USFQ - CMP-2102: Programación Avanzada en C++
// Clase 09: C-Style Strings, Stack vs .rodata y Mutabilidad

#include <iostream>

int main() {
    // 1. Stack vs .rodata
    char bufferStack[16] = "Refugio 8";
    const char* ptrLiteral = "Sector Norte";

    std::cout << "bufferStack: " << bufferStack << " (" << sizeof(bufferStack) << " B en el stack)\n";
    std::cout << "ptrLiteral:  " << ptrLiteral << " (" << sizeof(ptrLiteral) << " B puntero a .rodata)\n";

    // 2. Mutabilidad en el Stack vs Inmutabilidad en .rodata
    bufferStack[0] = 'Z'; // Válido: modifica la memoria local en el stack
    std::cout << "bufferStack modificado: " << bufferStack << "\n";

    // *ptrLiteral = 'X'; // ERROR en ejecución (Segmentation Fault): .rodata es de solo lectura

    return 0;
}
