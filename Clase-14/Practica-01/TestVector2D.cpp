// TestVector2D.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 14: Introducción a openFrameworks y Sobrecarga de Operadores
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include "Vector2D.h"

int main()
{
    std::cout << "=== Pruebas de la Clase Vector2D ===\n\n";

    Vector2D v1(3.0f, 4.0f);
    Vector2D v2(1.0f, 2.0f);

    std::cout << "Vector inicial v1: (" << v1.getX() << ", " << v1.getY() << ")\n";
    std::cout << "Vector inicial v2: (" << v2.getX() << ", " << v2.getY() << ")\n\n";

    // 1. Prueba de suma binaria (+)
    Vector2D v3 = v1 + v2;
    std::cout << "1. Suma binaria (v1 + v2):\n";
    std::cout << "   Obtenido: (" << v3.getX() << ", " << v3.getY() << ")\n";
    std::cout << "   Esperado: (4, 6)\n\n";

    // 2. Prueba de multiplicacion por escalar (*)
    Vector2D prod = v2 * 3.0f; // vector * escalar
    std::cout << "2. Multiplicacion por escalar (v2 * 3.0f):\n";
    std::cout << "   Obtenido: (" << prod.getX() << ", " << prod.getY() << ")\n";
    std::cout << "   Esperado: (3, 6)\n\n";

    // 3. Prueba de actualizacion cinematica (v1 = v1 + v2)
    v1 = v1 + v2;
    std::cout << "3. Actualizacion cinematica (v1 = v1 + v2):\n";
    std::cout << "   Obtenido en v1: (" << v1.getX() << ", " << v1.getY() << ")\n";
    std::cout << "   Esperado: (4, 6)\n\n";

    std::cout << "=== Fin de las pruebas ===\n";
    return 0;
}
