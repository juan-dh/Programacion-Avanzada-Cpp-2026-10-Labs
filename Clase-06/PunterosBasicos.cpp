// PunterosBasicos.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

int main() {
    int racionesComida{20};
    int racionesAgua{15};

    // 1. Declaracion e inicializacion con nullptr
    int* ptrRecurso{nullptr};

    // 2. Apuntar a racionesComida
    ptrRecurso = &racionesComida;
    std::cout << "=== INSPECCION DE SUMINISTROS ===\n";
    std::cout << "Direccion de racionesComida: " << &racionesComida << "\n";
    std::cout << "Puntero almacena direccion:  " << ptrRecurso << "\n";
    std::cout << "Valor desreferenciado (*ptr): " << *ptrRecurso << " unidades\n";

    // 3. Modificacion indirecta
    *ptrRecurso -= 5; // Consumo de 5 raciones de comida
    std::cout << "Raciones de comida restantes: " << racionesComida << " unidades\n";

    // 4. Redireccion del puntero a racionesAgua
    ptrRecurso = &racionesAgua;
    std::cout << "\n=== REDIRECCION A AGUA ===\n";
    std::cout << "Puntero ahora apunta a:      " << ptrRecurso << "\n";
    std::cout << "Valor desreferenciado (*ptr): " << *ptrRecurso << " litros\n";

    // 5. Verificacion de puntero nulo
    ptrRecurso = nullptr;
    if (ptrRecurso != nullptr) {
        std::cout << "Valor: " << *ptrRecurso << "\n";
    } else {
        std::cout << "\n[Aviso] El puntero es nulo (nullptr). Acceso prevenido con exito.\n";
    }

    return 0;
}
