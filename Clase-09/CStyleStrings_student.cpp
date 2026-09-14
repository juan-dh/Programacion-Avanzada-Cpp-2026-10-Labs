// CStyleStrings_student.cpp
// Clase 09: C-Style Strings, Stack vs .rodata y Mutabilidad
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

int main() {
    // 1. Declarar arreglo local en el stack y puntero a literal en .rodata
    char bufferStack[16] = "Refugio 8";
    const char* ptrLiteral = "Sector Norte";

    std::cout << "bufferStack: " << bufferStack << " (" << sizeof(bufferStack) << " B en el stack)\n";
    std::cout << "ptrLiteral:  " << ptrLiteral << " (" << sizeof(ptrLiteral) << " B puntero a .rodata)\n";

    // TODO: Modifica el primer carácter de bufferStack por 'Z' e imprímelo
    // bufferStack[0] = ...

    // Pregunta reflexiva: ¿Qué ocurriría si intentamos ejecutar: *ptrLiteral = 'X'; ?

    return 0;
}
