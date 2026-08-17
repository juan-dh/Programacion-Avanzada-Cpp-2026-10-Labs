// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2702: Programación Avanzada en C++
// Laboratorio 1 (Código Base): Monitoreo de Infección Zombie
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int dias{0};
    int zombies{5}; // Iniciamos la observación con 5 zombies [141]

    cout << "==================================================" << endl;
    cout << "   MONITOREO DE INFECCIÓN ZOMBIE: LABORATORIO 1" << endl;
    cout << "==================================================" << endl;

    cout << "Ingrese los dias de observacion: ";
    cin >> dias; // [103, 147]

    // Validacion basica de entrada [158]
    if (dias <= 0)
    {
        cout << "[ERROR] Los dias de observacion deben ser mayores a cero." << endl;
        return 1; // Terminar programa con codigo de error [137]
    }

    cout << "\nIniciando reporte diario..." << endl;

    // Bucle de simulacion temporal [201]
    for (int dia{1}; dia <= dias; ++dia)
    {

        // =========================================================================
        // // TODO 1: Cada dia se suman exactamente 3 nuevos zombis a la horda [144].
        // Escribe una sola linea de codigo para incrementar 'zombies' en 3.
        // =========================================================================
        /* Tu linea de codigo aqui (LINEA 1) */

        cout << "Dia " << dia << ": " << zombies << " zombies detectados en el area." << endl;

        // =========================================================================
        // // TODO 2: Si el numero de 'zombies' supera el limite critico de 20 [148],
        // imprime una alerta usando un condicional 'if'. Completa la condicion:
        // =========================================================================
        if (false)
        { // <-- REEMPLAZA EL 'false' CON LA CONDICION CORRECTA (LINEA 2)
            cout << "  [ALERTA]: ¡Peligro critico! Horda aproximandose al refugio." << endl;
        }
    }

    cout << "\nSimulacion concluida." << endl;
    return 0; // [137]
}
