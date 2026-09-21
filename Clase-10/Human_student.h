// Human_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 10: Separación de Interfaz e Implementación y Ciclo de Vida del Objeto
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

// TODO 1: Implementa las directivas del preprocesador (include guards)
// para evitar el error de doble inclusión (redefinition of class Human).
// Pista: Utiliza #ifndef, #define al inicio y #endif al final del archivo.
#ifndef /* TODO: HUMAN_H */
#define /* TODO: HUMAN_H */

#include <string>

// TODO 2: Declara el enum class con ámbito para los estados de salud:
// Healthy, Infected, Zombie, Dead (consistente con la Clase 09).
enum class HealthState {
    Healthy,
    Infected,
    Zombie,
    // TODO: Agregar el estado Dead
    /* TODO */
};

class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{30};

public:
    Human(const std::string& n, int h, HealthState s = HealthState::Healthy, int d = 30);

    // TODO 3: Declara el destructor de la clase (~Human).
    // Recuerda que el destructor no recibe parámetros ni tiene tipo de retorno.
    /* TODO: ~Human(); */

    const std::string& getName() const;
    int getHealth() const;
    HealthState getState() const;
    int getDamage() const;

    void setState(HealthState newState);
    void applyDamage(int damageAmount);
    void attack(Human* target) const;

    std::string getStateString() const;
    void displayCard() const;
};

// Cierre del include guard
#endif // /* TODO: HUMAN_H */
