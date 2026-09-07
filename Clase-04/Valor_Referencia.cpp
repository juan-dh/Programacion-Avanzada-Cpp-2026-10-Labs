// Valor_Referencia.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

class Human {
private:
    std::string name;
    int health{100};

public:
    Human(std::string nameVal, int healthVal)
        : name{nameVal}, health{healthVal} {}

    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
    }

    void heal(int amount) {
        health += amount;
        if (health > 100) health = 100;
    }

    std::string getName() const { return name; }
    int getHealth() const { return health; }

    void displayCard() const {
        std::cout << "Humano: " << name << " | Salud: " << health << " HP\n";
    }
};

// Funcion que recibe por VALOR (copia)
void applyZombieBiteByValue(Human entity) {
    std::cout << "[Por Valor] Aplicando mordida de 40 HP a la copia...\n";
    entity.takeDamage(40);
    std::cout << "[Por Valor] Salud dentro de la funcion: " << entity.getHealth() << " HP\n";
}

// Funcion que recibe por REFERENCIA (alias)
void applyZombieBiteByReference(Human& entity) {
    std::cout << "[Por Referencia] Aplicando mordida de 40 HP al original...\n";
    entity.takeDamage(40);
    std::cout << "[Por Referencia] Salud dentro de la funcion: " << entity.getHealth() << " HP\n";
}

int main() {
    Human ellie{"Ellie", 100};

    std::cout << "--- ESTADO INICIAL ---\n";
    ellie.displayCard();

    std::cout << "\n--- PASO POR VALOR ---\n";
    applyZombieBiteByValue(ellie);
    std::cout << "Salud despues de la llamada: " << ellie.getHealth() << " HP (¡NO CAMBIO!)\n";

    std::cout << "\n--- PASO POR REFERENCIA ---\n";
    applyZombieBiteByReference(ellie);
    std::cout << "Salud despues de la llamada: " << ellie.getHealth() << " HP (¡CAMBIO REAL!)\n";

    return 0;
}