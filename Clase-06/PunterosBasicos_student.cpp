// PunterosBasicos_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

int main() {
    int racionesComida{20};
    int racionesAgua{15};

    // TODO: Declarar un puntero a entero 'ptrRecurso' inicializado con nullptr
    int* ptrRecurso{ /* TODO */ };

    // TODO: Apuntar ptrRecurso a la direccion de racionesComida (&racionesComida)
    ptrRecurso = /* TODO */;
    
    std::cout << "=== INSPECCION DE SUMINISTROS ===\n";
    std::cout << "Direccion de racionesComida: " << &racionesComida << "\n";
    std::cout << "Puntero almacena direccion:  " << ptrRecurso << "\n";
    
    // TODO: Desreferenciar ptrRecurso para mostrar su valor (*ptrRecurso)
    std::cout << "Valor desreferenciado (*ptr): " << /* TODO */ << " unidades\n";

    // TODO: Restar 5 unidades de forma indirecta modificando *ptrRecurso
    /* TODO */ -= 5;
    std::cout << "Raciones de comida restantes: " << racionesComida << " unidades\n";

    // TODO: Redirigir ptrRecurso a la direccion de racionesAgua
    ptrRecurso = /* TODO */;
    std::cout << "\n=== REDIRECCION A AGUA ===\n";
    std::cout << "Puntero ahora apunta a:      " << ptrRecurso << "\n";
    std::cout << "Valor desreferenciado (*ptr): " << *ptrRecurso << " litros\n";

    // TODO: Asignar nullptr a ptrRecurso y verificar si es distinto de nullptr antes de acceder
    ptrRecurso = /* TODO */;
    if ( /* TODO: ptrRecurso != nullptr */ ) {
        std::cout << "Valor: " << *ptrRecurso << "\n";
    } else {
        std::cout << "\n[Aviso] El puntero es nulo (nullptr). Acceso prevenido con exito.\n";
    }

    return 0;
}
